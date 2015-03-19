// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Chassis.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "../Commands/DriveWithJoysticks.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

#include <iostream>

Chassis::Chassis() : Subsystem("Chassis") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	m_frontLeftMotor = RobotMap::chassisFrontLeftMotor;
	m_frontRightMotor = RobotMap::chassisFrontRightMotor;
	m_backLeftMotor = RobotMap::chassisBackLeftMotor;
	m_backRightMotor = RobotMap::chassisBackRightMotor;

	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	m_frontLeftEncoder = RobotMap::chassisFrontLeftEncoder;
	m_frontRightEncoder = RobotMap::chassisFrontRightEncoder;
	m_backLeftEncoder = RobotMap::chassisBackLeftEncoder;
	m_backRightEncoder = RobotMap::chassisBackRightEncoder;

	m_frontLeftMotorPID = RobotMap::chassisFrontLeftMotorPID;
	m_frontRightMotorPID = RobotMap::chassisFrontRightMotorPID;
	m_backLeftMotorPID = RobotMap::chassisBackLeftMotorPID;
	m_backRightMotorPID = RobotMap::chassisBackRightMotorPID;

	m_gyro = RobotMap::chassisGyro;

	m_leftProximitySensor = RobotMap::chassisLeftProximitySensor;

	drive = new RobotDrive(m_frontLeftMotor, m_backLeftMotor, m_frontRightMotor, m_backRightMotor);
	drive->SetSafetyEnabled(false);
	drive->SetExpiration(0.1);
	drive->SetSensitivity(0.5);
	drive->SetMaxOutput(1.0);
	drive->SetInvertedMotor(RobotDrive::kFrontRightMotor,true);
	drive->SetInvertedMotor(RobotDrive::kRearRightMotor,true);
}

Chassis::~Chassis() {
	if(m_frontLeftMotor) {delete(m_frontLeftMotor);}
	if(m_frontRightMotor) {delete(m_frontRightMotor);}
	if(m_backLeftMotor) {delete(m_backLeftMotor);}
	if(m_backRightMotor) {delete(m_backRightMotor);}
	if(m_frontLeftEncoder) {delete(m_frontLeftEncoder);}
	if(m_frontRightEncoder) {delete(m_frontRightEncoder);}
	if(m_backLeftEncoder) {delete(m_backLeftEncoder);}
	if(m_backRightEncoder) {delete(m_backRightEncoder);}
	if(m_gyro) {delete(m_gyro);}
	if(m_leftProximitySensor) {delete(m_leftProximitySensor);}
	if(drive) {delete(drive);}
}

void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new DriveWithJoysticks());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void Chassis::MecanumDrive_Polar(float magnitude, float direction, float rotation){
	drive->MecanumDrive_Polar(magnitude, direction, rotation);
}

void Chassis::MecanumDrive_Cartesian(float x, float y, float rotation){
	std::cout << "FL: " << m_frontLeftEncoder->GetRate() << std::endl;
	std::cout << "FR: " << m_frontRightEncoder->GetRate() << std::endl;
	std::cout << "BL: " << m_backLeftEncoder->GetRate() << std::endl;
	std::cout << "BR: " << m_backRightEncoder->GetRate() << std::endl;

	drive->MecanumDrive_Cartesian(x, y, rotation);
}

bool Chassis::ProximitySensorIsTriggered() {
	return m_leftProximitySensor->Get();
}
