#pragma once

#include "mvvm/model/compounditem.h"
#include "mvvm/model/sessionmodel.h"
#include <QString>

//! 电机数据项 - 存储单个电机的所有属性
class MotorItem : public ModelView::CompoundItem {
public:
    static inline const std::string P_NAME = "P_NAME";
    static inline const std::string P_ENABLED = "P_ENABLED";
    static inline const std::string P_POSITION = "P_POSITION";
    static inline const std::string P_SPEED = "P_SPEED";
    static inline const std::string P_SPEED_CMD = "P_SPEED_CMD";

    MotorItem();
    
    // 便捷访问
    bool isEnabled() const { return property<bool>(P_ENABLED); }
    void setEnabled(bool enabled) { setProperty(P_ENABLED, enabled); }
    
    double position() const { return property<double>(P_POSITION); }
    void setPosition(double position) { setProperty(P_POSITION, position); }

    double speed() const { return property<double>(P_SPEED); }
    void setSpeed(double speed) { setProperty(P_SPEED, speed); }
    
    double speedCmd() const { return property<double>(P_SPEED_CMD); }
    void setSpeedCmd(double speedCmd) { setProperty(P_SPEED_CMD, speedCmd); }
};

//! 电机控制模型 - 管理所有电机
class MotorModel : public ModelView::SessionModel {
public:
    MotorModel();

    // 业务逻辑方法
    void enableMotor(MotorItem* motor);
    void disableMotor(MotorItem* motor);
    void setMotorSpeed(MotorItem* motor, double speed);

    MotorItem* getMotor(int index);

    // 序列化
    void saveToFile(const QString& filename);
    void loadFromFile(const QString& filename);

private:
    void populateModel();
};

