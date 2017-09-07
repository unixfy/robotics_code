#pragma config(Motor,  port3,           bothClaws,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           bothDoors,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           leftDrive,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           rightDrive,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           rightLiftArm,  tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           leftLiftArm,   tmotorVex393_MC29, openLoop)
task main()
{
	motor[leftDrive] = 127;		  // Motor on port2 is run at full (127) power forward
	motor[rightDrive]  = 127;		  // Motor on port3 is run at full (127) power forward
	wait1Msec(4000);			            // Robot runs previous code for 3000 milliseconds before moving on


}
