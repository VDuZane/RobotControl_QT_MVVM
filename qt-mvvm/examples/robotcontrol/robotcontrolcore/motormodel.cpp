#include "motormodel.h"
#include "mvvm/factories/modeldocumentfactory.h"
#include <iostream>

MotorItem::MotorItem() : ModelView::CompoundItem("MotorItem")
{
    addProperty(P_NAME, "Motor")->setDisplayName("Name");
    addProperty(P_ENABLED, false)->setDisplayName("Enabled");
    addProperty(P_POSITION, 0.0)->setDisplayName("Position");
    addProperty(P_SPEED, 0.0)->setDisplayName("Speed");
    addProperty(P_SPEED_CMD, 0.0)->setDisplayName("Speed Command");
}

MotorModel::MotorModel() : ModelView::SessionModel("MotorModel")
{
    registerItem<MotorItem>();
    populateModel();
    setUndoRedoEnabled(true);
}

void MotorModel::populateModel()
{
    auto motor = insertItem<MotorItem>();
    motor->setProperty(MotorItem::P_NAME, "Motor1");
    motor->setProperty(MotorItem::P_ENABLED, false);
    motor->setProperty(MotorItem::P_POSITION, 0.0);
    motor->setProperty(MotorItem::P_SPEED, 0.0);
    motor->setProperty(MotorItem::P_SPEED_CMD, 0.0);
}

void MotorModel::enableMotor(MotorItem* motor)
{
    if (!motor)
        return;
    motor->setEnabled(true);
}

void MotorModel::disableMotor(MotorItem* motor)
{
    if (!motor)
        return;
    motor->setEnabled(false);
    // motor->setSpeed(0.0);
    std::cout << "Motor is disabled" << std::endl;
    motor->setSpeedCmd(0.0);
    std::cout << "Speed command is set to 0" << std::endl;
}

void MotorModel::setMotorSpeed(MotorItem* motor, double speed)
{
    if (!motor)
        return;
    motor->setSpeed(speed);
    motor->setSpeedCmd(speed);
}

MotorItem* MotorModel::getMotor(int index)
{
    auto motors = topItems<MotorItem>();
    return (index >= 0 && index < motors.size()) ? motors[index] : nullptr;    
}

void MotorModel::saveToFile(const QString& filename)
{
    auto document = ModelView::CreateJsonDocument({this});
    document->save(filename.toStdString());
}

void MotorModel::loadFromFile(const QString& filename)
{
    auto document = ModelView::CreateJsonDocument({this});
    document->load(filename.toStdString());
}