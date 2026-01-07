#include "rosbridge.h"
#include <QDebug>

RosBridge::RosBridge(MotorModel* motorModel, QObject* parent)
    : QObject(parent)
    , m_motorModel(motorModel)
    , m_motor(nullptr)
    , m_spinTimer(new QTimer(this))
    , m_initialized(false)
{
    // 获取第一个电机
    if (m_motorModel) {
        m_motor = m_motorModel->getMotor(0);
    }
    
    // 设置定时器，用于定期调用ROS2的spin
    connect(m_spinTimer, &QTimer::timeout, this, &RosBridge::spinOnce);
}

RosBridge::~RosBridge()
{
    stop();
    if (m_initialized) {
        rclcpp::shutdown();
    }
}

bool RosBridge::initialize(int argc, char** argv)
{
    try {
        // 初始化ROS2
        rclcpp::init(argc, argv);
        
        // 创建节点
        m_node = std::make_shared<rclcpp::Node>("robot_control_node");
        
        // 创建发布者
        m_speedCmdPublisher = m_node->create_publisher<std_msgs::msg::Float64>(
            "/motor/speed_cmd", 10);
        m_speedPublisher = m_node->create_publisher<std_msgs::msg::Float64>(
            "/motor/speed", 10);
        m_positionPublisher = m_node->create_publisher<std_msgs::msg::Float64>(
            "/motor/position", 10);
        m_enabledPublisher = m_node->create_publisher<std_msgs::msg::Bool>(
            "/motor/enabled", 10);
        
        // 创建订阅者
        m_speedCmdSubscriber = m_node->create_subscription<std_msgs::msg::Float64>(
            "/motor/speed_cmd_in", 10,
            std::bind(&RosBridge::speedCallback, this, std::placeholders::_1));
            
        m_positionSubscriber = m_node->create_subscription<std_msgs::msg::Float64>(
            "/motor/position_in", 10,
            std::bind(&RosBridge::positionCallback, this, std::placeholders::_1));
            
        m_enableSubscriber = m_node->create_subscription<std_msgs::msg::Bool>(
            "/motor/enable_in", 10,
            std::bind(&RosBridge::enableCallback, this, std::placeholders::_1));
        
        m_initialized = true;
        
        qDebug() << "ROS2 initialized successfully";
        RCLCPP_INFO(m_node->get_logger(), "Robot Control Node started");
        
        return true;
        
    } catch (const std::exception& e) {
        qDebug() << "Failed to initialize ROS2:" << e.what();
        return false;
    }
}

void RosBridge::start()
{
    if (!m_initialized) {
        qDebug() << "ROS2 not initialized!";
        return;
    }
    
    // 启动定时器，每10ms调用一次spin
    m_spinTimer->start(10);
    
    qDebug() << "ROS2 bridge started";
}

void RosBridge::stop()
{
    m_spinTimer->stop();
    qDebug() << "ROS2 bridge stopped";
}

void RosBridge::spinOnce()
{
    if (m_initialized && m_node) {
        // 处理ROS2回调
        rclcpp::spin_some(m_node);
        
        // 定期发布电机状态
        publishMotorStatus();
    }
}

void RosBridge::publishMotorStatus()
{
    if (!m_motor) return;
    
    // 发布速度
    auto speed_msg = std_msgs::msg::Float64();
    speed_msg.data = m_motor->speed();
    m_speedPublisher->publish(speed_msg);
    
    // 发布速度指令
    auto speed_cmd_msg = std_msgs::msg::Float64();
    speed_cmd_msg.data = m_motor->speedCmd();
    m_speedCmdPublisher->publish(speed_cmd_msg);
    
    // 发布位置
    auto position_msg = std_msgs::msg::Float64();
    position_msg.data = m_motor->position();
    m_positionPublisher->publish(position_msg);
    
    // 发布使能状态
    auto enabled_msg = std_msgs::msg::Bool();
    enabled_msg.data = m_motor->isEnabled();
    m_enabledPublisher->publish(enabled_msg);
}

// ROS2订阅回调
void RosBridge::speedCallback(const std_msgs::msg::Float64::SharedPtr msg)
{
    qDebug() << "Received speed command:" << msg->data;
    
    if (m_motor) {
        m_motor->setSpeedCmd(msg->data);
    }
    
    emit motorSpeedReceived(msg->data);
}

void RosBridge::positionCallback(const std_msgs::msg::Float64::SharedPtr msg)
{
    qDebug() << "Received position:" << msg->data;
    
    if (m_motor) {
        m_motor->setPosition(msg->data);
    }
    
    emit motorPositionReceived(msg->data);
}

void RosBridge::enableCallback(const std_msgs::msg::Bool::SharedPtr msg)
{
    qDebug() << "Received enable command:" << msg->data;
    
    if (m_motor && m_motorModel) {
        if (msg->data) {
            m_motorModel->enableMotor(m_motor);
        } else {
            m_motorModel->disableMotor(m_motor);
        }
    }
    
    emit motorEnableReceived(msg->data);
}

void RosBridge::onMotorSpeedChanged()
{
    // Model变化时立即发布
    publishMotorStatus();
}

void RosBridge::onMotorEnabledChanged()
{
    // Model变化时立即发布
    publishMotorStatus();
}