// main.cpp
#include "robotcontrolcore/mainwindow.h"
#include "robotcontrolcore/rosbridge.h"
#include <QApplication>
#include <QLocale>

int main(int argc, char *argv[])
{
    QLocale::setDefault(QLocale(QLocale::English, QLocale::UnitedStates));
    
    QApplication app(argc, argv);
    
    MainWindow window;
    
    // ⭐ 创建并初始化ROS2桥接
    RosBridge* rosBridge = new RosBridge(window.getMotorModel(), &window);
    if (rosBridge->initialize(argc, argv)) {
        rosBridge->start();
    }
    
    window.show();
    
    int result = app.exec();
    
    // 清理ROS2
    delete rosBridge;
    
    return result;
}