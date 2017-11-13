#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port5,           leftMotor,     tmotorVex393_MC29, openLoop, encoderPort, I2C_1)
#pragma config(Motor,  port9,           rightMotor,    tmotorVex393_MC29, openLoop, reversed, encoderPort, I2C_2)

#pragma platform(VEX2)

//#pragma competitionControl(Competition)

#include "Vex_Competition_Includes.c"

void pre_auton()
{
	//bStopTasksBetweenModes = true;



	nMotorEncoder[leftMotor] = 0;
	nMotorEncoder[rightMotor] = 0;

}

task autonomous()
{
	int encoderValue1;
	int encoderValue2;
	while(nMotorEncoder[rightMotor] < 1000)
	{
		encoderValue1 = SensorValue[I2C_1];
		encoderValue2 = SensorValue[I2C_2];
		motor[leftMotor] = 127;
		motor[rightMotor] = 127;
	};

	//while(nMotorEncoder[rightMotor] < 1000)
	//{
	//	encoderValue2 = SensorValue [I2C_2];
	//	motor[rightMotor] = 127;
	//};
}

task usercontrol()
{
while(true){
	motor[rightMotor] = 127;
}
}
