#pragma once

#include <QMainWindow>
#include "motormodel.h"
#include <memory>
#include "ui_MotorControl_UI.h"

#include "mvvm/viewmodel/defaultviewmodel.h"
#include "mvvm/viewmodel/viewmodeldelegate.h"
#include "mvvm/signals/modelmapper.h"

class TestDialog;  // ⭐ 前向声明

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

protected:
    void resizeEvent(QResizeEvent* event) override;  // 响应窗口大小变化

private slots:
    // 槽函数响应 UI 事件
    void onEnableClicked();
    void onDisableClicked();
    void onSpeedChanged(int value);
    void onSaveClicked();
    void onLoadClicked();
    void onExitClicked();
    void onShowTestDialog();
    
    // 响应模型变化
    void onModelDataChanged();

    // 滚动条槽函数
    void onHorizontalScrollChanged(int value);
    void onVerticalScrollChanged(int value);


private:
    void setupConnections();
    void setupMVVM();
    void updateUI();
    void createMenus();
    void updateScrollBars();  // 更新滚动条范围

    Ui::MainWindow *ui;

    // MVVM 组件
    std::unique_ptr<MotorModel> m_motorModel;
    ModelView::DefaultViewModel* m_viewModel;
    ModelView::ViewModelDelegate* m_delegate;

    // 业务数据
    MotorItem* m_motor;

    // 记录内容区域的原始尺寸
    QSize m_contentSize;
    QPoint m_scrollOffset;  // 当前滚动偏移量
};