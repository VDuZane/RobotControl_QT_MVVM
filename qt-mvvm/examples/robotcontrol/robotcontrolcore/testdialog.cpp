#include "testdialog.h"
#include "ui_TestDialog.h"  // ⭐ 自动生成的头文件：ui_ + 文件名
#include <QMessageBox>

TestDialog::TestDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    
    // ⭐ 连接按钮信号到槽函数
    connect(ui->pushButton, &QPushButton::clicked, 
            this, &TestDialog::onTestClicked);
    connect(ui->pushButton_2, &QPushButton::clicked, 
            this, &TestDialog::onExitClicked);
}

TestDialog::~TestDialog()
{
    delete ui;
}

void TestDialog::onTestClicked()
{
    // Test 按钮被点击时的操作
    QMessageBox::information(this, "Test", "Test button clicked!");
}

void TestDialog::onExitClicked()
{
    // Exit 按钮被点击时关闭对话框
    close();  // 或者 accept() 或 reject()
}