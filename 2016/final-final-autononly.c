#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Motor,  port3,           bothClaws,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           bothDoors,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           leftDrive,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           rightDrive,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           rightLiftArm,  tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           leftLiftArm,   tmotorVex393_MC29, openLoop)
task main()
{
	// NO NEED FOR KICK OUT WHEN STAR IS STARTED ON SIDE! (saves time aswell)
	////Kicks out star pt.1
	//motor[rightDrive] = 100;
	//motor[leftDrive] = 100;
	//delay(350);
	////Kicks out star pt.2
	//motor[rightDrive] = 0;
	//motor[leftDrive] = 0;
	//delay(1000);
	// Start lift for 1.5 seconds
	motor[leftLiftArm] = 127;
	motor[rightLiftArm] = 127;
	motor[bothClaws] = 127;
	delay(1500);
	// Start drive after 1.5 seconds of lift moving
	motor[rightDrive] = 68;
	motor[leftDrive] = 68;
	delay(1000);
	// Kills claw after 1sec but keeps drive and lift arm going
	motor[bothClaws] = 0;
	motor[rightDrive] = 68;
	motor[leftDrive] = 68;
	motor[leftLiftArm] = 127;
	motor[rightLiftArm] = 127;
	delay(2000);
	// Murders drive after 2sec but keeps lift arm going
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
	motor[leftLiftArm] = 127;
	motor[rightLiftArm] = 127;
	delay(500);
	// Suffocates lift arm after 1sec
	motor[leftLiftArm] = 0;
	motor[rightLiftArm] = 0;

	// THAT'S 2 POINTS - 7 seconds

	// move backward 500ms
	motor[leftDrive] = 69;
	motor[rightDrive] = 69;
	delay(500);

	// 7.5 seconds





}
