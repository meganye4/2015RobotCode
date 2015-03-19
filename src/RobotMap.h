// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILib.h"


//Do not commit it defined, for testbot only
#define TESTERBOT 0

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

#define CHASSISGYROANALOGINPUT 0
#define STOPALIGNBUTTON 11

#define CHASSIS_ENCODER_FRONT_LEFT_PORT_1 	0
#define CHASSIS_ENCODER_FRONT_LEFT_PORT_2 	1
#define CHASSIS_ENCODER_FRONT_RIGHT_PORT_1 	2
#define CHASSIS_ENCODER_FRONT_RIGHT_PORT_2	3
#define CHASSIS_ENCODER_BACK_RIGHT_PORT_1 	6
#define CHASSIS_ENCODER_BACK_RIGHT_PORT_2	7
#define CHASSIS_ENCODER_BACK_LEFT_PORT_1	4
#define CHASSIS_ENCODER_BACK_LEFT_PORT_2	5

#define WINCH_ENCODER_PORT_1	8
#define WINCH_ENCODER_PORT_2	9

#define CHASSIS_PROXIMITY_SENSOR_LEFT 10

#define AUTO_P_DISTANCE 		0.001
#define AUTO_I_DISTANCE 		0
#define AUTO_D_DISTANCE 		0.0007
#define AUTO_PULSES_PER_INCH	20.0

#define CHASSIS_P_FRONT_LEFT 	0.00036
#define CHASSIS_I_FRONT_LEFT 	0.000031
#define CHASSIS_D_FRONT_LEFT 	0.0001
#define CHASSIS_F_FRONT_LEFT 	0.0003

#define CHASSIS_P_BACK_LEFT 	0.00036
#define CHASSIS_I_BACK_LEFT 	0.000031
#define CHASSIS_D_BACK_LEFT 	0.0001
#define CHASSIS_F_BACK_LEFT 	0.0003

#define CHASSIS_P_FRONT_RIGHT 	0.00036
#define CHASSIS_I_FRONT_RIGHT 	0.000031
#define CHASSIS_D_FRONT_RIGHT 	0.0001
#define CHASSIS_F_FRONT_RIGHT 	0.0003

#define CHASSIS_P_BACK_RIGHT 	0.00036
#define CHASSIS_I_BACK_RIGHT 	0.000031
#define CHASSIS_D_BACK_RIGHT 	0.0001
#define CHASSIS_F_BACK_RIGHT 	0.0003

#define AUTO_P_TURN 	0.01
#define AUTO_I_TURN 	0
#define AUTO_D_TURN 	0

#define WINCH_P 0.01
#define WINCH_I 0
#define WINCH_D 0
#define WINCH_PULSES_PER_TOTE 	100.0

class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static Talon* winchtalon;
	static SpeedController* chassisFrontLeftMotor;
	static SpeedController* chassisFrontRightMotor;
	static SpeedController* chassisBackLeftMotor;
	static SpeedController* chassisBackRightMotor;

	static PIDController* chassisFrontLeftMotorPID;
	static PIDController* chassisFrontRightMotorPID;
	static PIDController* chassisBackLeftMotorPID;
	static PIDController* chassisBackRightMotorPID;

	static Gyro* chassisGyro;
	static BuiltInAccelerometer* navigationalAccelerometer;
	static Accelerometer* accel;
	static DigitalInput* chassisLeftProximitySensor;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static Encoder* chassisFrontLeftEncoder;
	static Encoder* chassisFrontRightEncoder;
	static Encoder* chassisBackLeftEncoder;
	static Encoder* chassisBackRightEncoder;

	static Encoder* winchEncoder;
	static PIDController* winchEncoderPID;

	static void init();
};
#endif
