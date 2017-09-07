#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           funnyMotorLeft, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           funnyMotorRight, tmotorVex393_MC29, openLoop, reversed)
task main()
{

	// Move forward at full power for 3 seconds
	motor[funnyMotorLeft] = -127;		  // Motor on port3 is run at full (127) power forward\
	motor[funnyMotorRight] = -127;
	wait1Msec(500);			        // Robot runs previous code for 3000 milliseconds before moving on
}
