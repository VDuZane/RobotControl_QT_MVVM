#pragma once

#include <QDialog>

// ⭐ Qt Designer 自动生成的命名空间
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }  // ⭐ 注意：这里是 "Dialog"，对应 .ui 文件中的 class 名
QT_END_NAMESPACE

class TestDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TestDialog(QWidget *parent = nullptr);
    ~TestDialog();

private slots:
    void onTestClicked();   // Test 按钮的槽函数
    void onExitClicked();   // Exit 按钮的槽函数

private:
    Ui::Dialog *ui;  // ⭐ 注意：这里是 Ui::Dialog，对应 .ui 文件
};