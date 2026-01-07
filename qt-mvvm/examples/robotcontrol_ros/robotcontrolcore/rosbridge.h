#pragma once

#include <QObject>
#include <QTimer>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/float64.hpp>
#include <std_msgs/msg/bool.hpp>
#include <memory>
#include "motormodel.h"

//! ROS2桥接类 - 负责ROS2与Qt/MVVM之间的数据交互
class RosBridge : public QObject
{
    Q_OBJECT

public:
    explicit RosBridge(MotorModel* motorModel, QObject* parent = nullptr);
    ~RosBridge();

    // 初始化ROS2节点
    bool initialize(int argc, char** argv);
    
    // 启动/停止ROS2
    void start();
    void stop();

signals:
    // 从ROS接收到数据的信号
    void motorSpeedReceived(double speed);
    void motorPositionReceived(double position);
    void motorEnableReceived(bool enabled);

private slots:
    // Qt定时器触发ROS2的spin
    void spinOnce();
    
    // 响应Model变化，发布到ROS
    void onMotorSpeedChanged();
    void onMotorEnabledChanged();

private:
    // ROS2订阅回调
    void speedCallback(const std_msgs::msg::Float64::SharedPtr msg);
    void positionCallback(const std_msgs::msg::Float64::SharedPtr msg);
    void enableCallback(const std_msgs::msg::Bool::SharedPtr msg);

    // 发布电机状态到ROS
    void publishMotorStatus();

    MotorModel* m_motorModel;
    MotorItem* m_motor;
    
    // ROS2组件
    std::shared_ptr<rclcpp::Node> m_node;
    
    // 发布者
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr m_speedCmdPublisher;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr m_speedPublisher;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr m_positionPublisher;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr m_enabledPublisher;
    
    // 订阅者
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr m_speedCmdSubscriber;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr m_positionSubscriber;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr m_enableSubscriber;
    
    // Qt定时器用于ROS2 spin
    QTimer* m_spinTimer;
    
    bool m_initialized;
};