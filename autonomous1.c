#pragma config(Motor,  port4,           rightDrive1,   tmotorNone, openLoop)
#pragma config(Motor,  port5,           leftDrive,     tmotorVex393_MC29, openLoop, driveLeft)
#pragma config(Motor,  port6,           neckMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           twistyMotor,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           clawMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           rightDrive,    tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*----------------------------------------------------------------------------------------------------*\
|*                                   - Moving Forward with 4 Motors -                                 *|
|*                                      ROBOTC on VEX 2.0 CORTEX                                      *|
|*                                                                                                    *|
|*  This program instructs your robot to move forward at full power for three seconds.  There is a    *|
|*  two second pause at the beginning of the program.                                                 *|
|*                                                                                                    *|
|*                                        ROBOT CONFIGURATION                                         *|
|*    NOTES:                                                                                          *|
|*    1)  Reversing both right-side motors (ports 2 and 3) in the "Motors and Sensors Setup" is       *|
|*        needed with the "VEX Tumbler" model, but may not be needed for all robot configurations.    *|
|*    2)  Power levels that can be assigned to a motor port range from -127 (full reverse) to         *|
|*        127 (full forward).                                                                         *|
|*                                                                                                    *|
|*    MOTORS & SENSORS:                                                                               *|
|*    [I/O Port]          [Name]                [Type]                [Description]                   *|
|*    Motor Port 2        frontRightMotor       VEX 3-wire module     Right side motor                *|
|*    Motor Port 3        backRightMotor        VEX 3-wire module     Right side motor                *|
|*    Motor Port 4        frontLefttMotor       VEX 3-wire module     Left side motor                 *|
|*    Motor Port 5        backLeftMotor         VEX 3-wire module     Left side motor                 *|
\*----------------------------------------------------------------------------------------------------*/


//+++++++++++++++++++++++++++++++++++++++++++++| MAIN |+++++++++++++++++++++++++++++++++++++++++++++++
task main()
{
	//wait1Msec(2000);						// Robot waits for 2000 milliseconds before executing program

	//// Move forward at full power for 3 seconds
	//motor[rightDrive] = 127;		  // Motor on port2 is run at full (127) power forward
	//motor[leftDrive]  = 127;		  // Motor on port3 is run at full (127) power forward
	//wait1Msec(2000);             // Robot runs previous code for 1000 milliseconds before moving on
	//motor[rightDrive] = 127;		//robot turns right .5 sec
	//motor[leftDrive] = -127;
	//wait1Msec(500);
	//motor[rightDrive] = 127;		//robot moves forward for 2 seconds
	//motor[leftDrive] = 127;
	//wait1Msec(2000);

	motor[rightDrive] = -50;
	motor[leftDrive] =  50;
	wait1Msec(500);
	motor[rightDrive]  = 127;
	motor[leftDrive] = 127;
	wait1Msec(1500);
	motor[rightDrive] = 127;
	motor[leftDrive] = -127;
	wait1Msec(500);
	motor[rightDrive] = 127;
	motor[leftDrive] = 127;
	wait1Msec(1500);


}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
