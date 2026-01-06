#include "mainwindow.h"
#include "testdialog.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_motorModel(std::make_unique<MotorModel>())
    , m_viewModel(nullptr)
    , m_delegate(nullptr)
    , m_motor(nullptr)
    , m_contentSize(881, 618)  // UI 文件中定义的原始尺寸
    , m_scrollOffset(0, 0)
{
    // ⭐ 步骤 1：调用 setupUi 创建所有 Designer 设计的控件
    ui->setupUi(this);
    
    // ⭐ 设置最小窗口尺寸
    setMinimumSize(500, 400);
    
    // ⭐ 初始化滚动条
    ui->horizontalScrollBar->setRange(0, 0);
    ui->horizontalScrollBar->setValue(0);
    ui->verticalScrollBar->setRange(0, 0);
    ui->verticalScrollBar->setValue(0);
    
    // ⭐ 连接滚动条信号
    connect(ui->horizontalScrollBar, &QScrollBar::valueChanged,
            this, &MainWindow::onHorizontalScrollChanged);
    connect(ui->verticalScrollBar, &QScrollBar::valueChanged,
            this, &MainWindow::onVerticalScrollChanged);
    
    // ⭐ 初始化滚动条状态
    updateScrollBars();
    
    // ⭐ 步骤 2：设置 MVVM 框架
    setupMVVM();
    
    // ⭐ 步骤 3：连接信号和槽
    setupConnections();
    
    // ⭐ 步骤 4：创建菜单
    createMenus();

    // ⭐ 步骤 5：初始化 UI 状态
    updateUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}

// ⭐ 新增：响应窗口大小变化
void MainWindow::resizeEvent(QResizeEvent* event)
{
    QMainWindow::resizeEvent(event);
    updateScrollBars();
    
    // 调整滚动条自身的位置和大小
    QSize clientSize = ui->centralwidget->size();
    
    // 水平滚动条位置（底部）
    ui->horizontalScrollBar->setGeometry(
        0,
        clientSize.height() - ui->horizontalScrollBar->height(),
        clientSize.width() - ui->verticalScrollBar->width(),
        ui->horizontalScrollBar->height()
    );
    
    // 垂直滚动条位置（右侧）
    ui->verticalScrollBar->setGeometry(
        clientSize.width() - ui->verticalScrollBar->width(),
        0,
        ui->verticalScrollBar->width(),
        clientSize.height() - ui->horizontalScrollBar->height()
    );
}

// ⭐ 新增：更新滚动条范围
void MainWindow::updateScrollBars()
{
    QSize clientSize = ui->centralwidget->size();
    
    // 计算需要滚动的范围
    int maxHScroll = qMax(0, m_contentSize.width() - clientSize.width() + ui->verticalScrollBar->width());
    int maxVScroll = qMax(0, m_contentSize.height() - clientSize.height() + ui->horizontalScrollBar->height());
    
    // 设置滚动条范围
    ui->horizontalScrollBar->setRange(0, maxHScroll);
    ui->horizontalScrollBar->setPageStep(clientSize.width());
    ui->horizontalScrollBar->setSingleStep(20);
    
    ui->verticalScrollBar->setRange(0, maxVScroll);
    ui->verticalScrollBar->setPageStep(clientSize.height());
    ui->verticalScrollBar->setSingleStep(20);
    
    // 显示/隐藏滚动条
    ui->horizontalScrollBar->setVisible(maxHScroll > 0);
    ui->verticalScrollBar->setVisible(maxVScroll > 0);
    
    // 限制当前滚动值
    if (ui->horizontalScrollBar->value() > maxHScroll) {
        ui->horizontalScrollBar->setValue(maxHScroll);
    }
    if (ui->verticalScrollBar->value() > maxVScroll) {
        ui->verticalScrollBar->setValue(maxVScroll);
    }
}

// ⭐ 新增：水平滚动处理
void MainWindow::onHorizontalScrollChanged(int value)
{
    m_scrollOffset.setX(value);
    
    // 移动所有子控件（除了滚动条本身）
    for (QWidget* child : ui->centralwidget->findChildren<QWidget*>()) {
        if (child == ui->horizontalScrollBar || child == ui->verticalScrollBar) {
            continue;  // 跳过滚动条
        }
        if (child->parent() != ui->centralwidget) {
            continue;  // 只移动直接子控件
        }
        
        // 计算新位置
        QPoint originalPos = child->property("originalPos").toPoint();
        if (originalPos.isNull()) {
            // 第一次，保存原始位置
            child->setProperty("originalPos", child->pos());
            originalPos = child->pos();
        }
        
        child->move(originalPos.x() - m_scrollOffset.x(),
                    originalPos.y() - m_scrollOffset.y());
    }
}

// ⭐ 新增：垂直滚动处理
void MainWindow::onVerticalScrollChanged(int value)
{
    m_scrollOffset.setY(value);
    
    // 移动所有子控件（除了滚动条本身）
    for (QWidget* child : ui->centralwidget->findChildren<QWidget*>()) {
        if (child == ui->horizontalScrollBar || child == ui->verticalScrollBar) {
            continue;
        }
        if (child->parent() != ui->centralwidget) {
            continue;
        }
        
        QPoint originalPos = child->property("originalPos").toPoint();
        if (originalPos.isNull()) {
            child->setProperty("originalPos", child->pos());
            originalPos = child->pos();
        }
        
        child->move(originalPos.x() - m_scrollOffset.x(),
                    originalPos.y() - m_scrollOffset.y());
    }
}

// ⭐ 新增：创建菜单（可选）
void MainWindow::createMenus()
{
    // 创建 "Tools" 菜单
    auto toolsMenu = menuBar()->addMenu("&Tools");
    
    // 添加 "Test Dialog" 菜单项
    auto testDialogAction = toolsMenu->addAction("&Test Dialog...");
    connect(testDialogAction, &QAction::triggered, 
            this, &MainWindow::onShowTestDialog);
}

void MainWindow::setupMVVM()
{
    // 获取电机对象
    m_motor = m_motorModel->getMotor(0);
    
    // ⭐ 创建 ViewModel（MVVM 的核心）
    m_viewModel = new ModelView::DefaultViewModel(m_motorModel.get(), this);
    
    // ⭐ 创建 Delegate（提供编辑器）
    m_delegate = new ModelView::ViewModelDelegate(this);
    
    // // 监听模型变化
    // connect(m_motorModel->mapper(), &ModelView::ModelMapper::dataChanged,
    //         this, &MainWindow::onModelDataChanged);
}

void MainWindow::setupConnections()
{
    // ⭐ 连接 Designer 创建的控件到槽函数
    connect(ui->Enable_Button, &QPushButton::clicked,
                this, &MainWindow::onEnableClicked);
    connect(ui->Disable_Button, &QPushButton::clicked,
                this, &MainWindow::onDisableClicked);
    connect(ui->Velocity_Cmd, &QSlider::valueChanged,
                this, &MainWindow::onSpeedChanged);
    connect(ui->NextDialog, &QPushButton::clicked,
        this, &MainWindow::onShowTestDialog);
    connect(ui->Exit, &QPushButton::clicked,
                this, &MainWindow::onExitClicked);
}

// ⭐⭐⭐ 关键函数：显示 TestDialog
void MainWindow::onShowTestDialog()
{
    // // 方式 A：模态对话框（阻塞主窗口，必须关闭对话框才能操作主窗口）
    // TestDialog dialog(this);
    // int result = dialog.exec();  // exec() 会阻塞，直到对话框关闭
    
    // if (result == QDialog::Accepted) {
    //     ui->statusbar->showMessage("Dialog accepted", 3000);
    // } else if (result == QDialog::Rejected) {
    //     ui->statusbar->showMessage("Dialog rejected", 3000);
    // }
    
    // 方式 B：非模态对话框（可以同时操作主窗口和对话框）
    auto dialog = new TestDialog(this);
    dialog->setAttribute(Qt::WA_DeleteOnClose);  // 关闭时自动删除
    dialog->show();

    // 可选：让对话框置顶并激活
    dialog->raise();
    dialog->activateWindow();
}

void MainWindow::onEnableClicked()
{
    // ⭐ 只修改 Model，UI 会自动更新
    m_motorModel->enableMotor(m_motor);
    ui->statusbar->showMessage("Motor Enabled", 3000);
    updateUI();  // 手动更新 UI
}

void MainWindow::onDisableClicked()
{
    // ⭐ 只修改 Model
    m_motorModel->disableMotor(m_motor);
    ui->statusbar->showMessage("Motor Disabled", 3000);
    updateUI();  // 手动更新 UI
}

void MainWindow::onSpeedChanged(int value)
{
    if (m_motor && m_motor->isEnabled()) {
        // m_motor->setSpeedCmd(speed);
        double speed = value / 100.0;
        m_motorModel->setMotorSpeed(m_motor, speed);
        
        // ⭐ 更新 Designer 创建的标签
        // ui->velocityLabel->setText(QString("Velocity: %1").arg(velocity, 0, 'f', 2));
        ui->statusbar->showMessage(QString("Speed: %1").arg(speed), 2000);
    } else {
        ui->statusbar->showMessage("Motor is disabled", 2000);
    }
}

void MainWindow::onSaveClicked()
{
    QString filename = QFileDialog::getSaveFileName(
        this, "Save Configuration", "", "JSON Files (*.json)");
    
    if (!filename.isEmpty()) {
        m_motorModel->saveToFile(filename);
        ui->statusbar->showMessage("Configuration saved", 3000);
    }
}

void MainWindow::onLoadClicked()
{
    QString filename = QFileDialog::getOpenFileName(
        this, "Load Configuration", "", "JSON Files (*.json)");
    
    if (!filename.isEmpty()) {
        m_motorModel->loadFromFile(filename);
        m_motor = m_motorModel->getMotor(0);
        updateUI();
        ui->statusbar->showMessage("Configuration loaded", 3000);
    }
}

void MainWindow::onExitClicked()
{
    close();
}

void MainWindow::onModelDataChanged()
{
    // ⭐ 模型数据变化时，自动更新 UI
    updateUI();
}

void MainWindow::updateUI()
{
    if (!m_motor) return;
    
    bool enabled = m_motor->isEnabled();
    
    // ⭐ 根据模型状态更新 Designer 创建的控件
    ui->Enable_Button->setEnabled(!enabled);
    ui->Disable_Button->setEnabled(enabled);
    ui->Velocity_Cmd->setEnabled(enabled);
    
    if (!enabled) {
        ui->Velocity_Cmd->setValue(0);
        // ui->velocityLabel->setText("Velocity: 0.00");
    } else {
        // ui->velocitySlider->setValue(m_motor->velocityCmd());
        // ui->velocityLabel->setText(
        //     QString("Velocity: %1").arg(m_motor->velocity(), 0, 'f', 2));
    }
    
    // TreeView 会自动更新，因为它连接了 ViewModel
}