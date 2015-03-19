// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef CHASSIS_H
#define CHASSIS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "../VisionClient.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Chassis: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	SpeedController* m_frontLeftMotor;
	SpeedController* m_frontRightMotor;
	SpeedController* m_backLeftMotor;
	SpeedController* m_backRightMotor;
	Gyro* m_gyro;
	RobotDrive* drive;
	Encoder* m_frontLeftEncoder;
	Encoder* m_frontRightEncoder;
	Encoder* m_backLeftEncoder;
	Encoder* m_backRightEncoder;

	PIDController* m_frontLeftMotorPID;
	PIDController* m_frontRightMotorPID;
	PIDController* m_backLeftMotorPID;
	PIDController* m_backRightMotorPID;

	DigitalInput* m_leftProximitySensor;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	Chassis();
	virtual ~Chassis();
	void MecanumDrive_Polar(float magnitude, float direction, float rotation);
	void MecanumDrive_Cartesian(float x, float y, float rotation);
	bool ProximitySensorIsTriggered();
	void InitDefaultCommand();
};

#endif
