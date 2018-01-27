#pragma config(Motor,  port3,           coneGrabber,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           coneLift,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           goalLift,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           rightDrive,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           leftDrive,     tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                       Competition Template 66233B                         */
/*                                                                           */
/*---------------------------------------------------------------------------*/

/*

-------------------------------------------------------------
I think there is a duck in my router. It always goes NAT, NAT, NAT.
-------------------------------------------------------------
So I want to dress up as a UDP packet for Halloween, but I don't know if anyone will get it.
-------------	------------------------------------------------
I could tell you an ICMP joke but it would probably be repetitive.
-------------------------------------------------------------
I wanted to write an IPv4 joke, but the good ones were all already exhausted.
-------------------------------------------------------------
Linux geek started working at McDonalds.
A customer asked him for a Big Mac and he gave him a bit of paper with FF:FF:FF:FF:FF:FF written on it.
-------------------------------------------------------------
I mount my soul at /dev/null
-------------------------------------------------------------
Why do Python Devs need glasses? Because they don't C#
-------------------------------------------------------------
One does not simply?.. merge into master.
-------------------------------------------------------------
For Windows problems reboot, for Linux problems be root.

*/

// This code is for the VEX cortex platform
#pragma platform(VEX2)

// Select Download method as "competition"
#pragma competitionControl(Competition)

//Main competition background code...do not modify!
#include "Vex_Competition_Includes.c"

void pre_auton()
{
	bStopTasksBetweenModes = true;
}

//  _   _______  __  ______                 ____ ____ ___  ____ ____ ___
// | | / / __/ |/_/ /_  __/__ ___ ___ _    / __// __/|_  ||_  /|_  // _ )
// | |/ / _/_>  <    / / / -_) _ `/  ' \  / _ \/ _ \/ __/_/_ <_/_ </ _  |
// |___/___/_/|_|   /_/  \__/\_,_/_/_/_/  \___/\___/____/____/____/____/

//   ___                  _____               _      _
//  / __|___ _ __  _ __  |_   _|__ _ __  _ __| |__ _| |_ ___
// | (__/ _ \ '  \| '_ \   | |/ -_) '  \| '_ \ / _` |  _/ -_)
//  \___\___/_|_|_| .__/   |_|\___|_|_|_| .__/_\__,_|\__\___|
//                |_|                   |_|

task autonomous()
{
	//motor[goalLift] = 70;
	//wait1Msec(550);

	//motor[leftDrive] = 127;
	//motor[rightDrive] = 127;
	//wait1Msec(1000);

	////motor[skizzorMotorLeft] = 127;
	////motor[skizzorMotorRight] = 127;
	////wait1Msec(600);

	//motor[goalLift] = -70;
	//wait1Msec(550);

	////motor[skizzorMotorLeft] = -127;
	////motor[skizzorMotorRight] = -127;
	////wait1Msec(400);

	//motor[leftDrive] = -127;
	//motor[rightDrive] = 127;

	//motor[leftDrive] = 127;
	//motor[rightDrive] = 127;

	//motor[leftDrive] = -127;
	//motor[rightDrive] = -127;
	//wait1Msec(500);

	//motor[leftDrive] = 127;
	//motor[rightDrive] = 127;

	///////////////////////////////////////////////////////////////////////////////////////

	//// Reset Motors
	//motor[rightDrive] = 0;
	//motor[leftDrive] = 0;

	//// Drive forward for 2 seconds then stop
	//motor[rightDrive] = 127;
	//motor[leftDrive] = 127;
	//wait1Msec(3500);
	//motor[rightDrive] = 0;
	//motor[leftDrive] = 0;

	//// Pick up goal lift
	//motor[goalLift] = 70;
	//wait1Msec(1050);
	//motor[goalLift] = 0;

	//// Back up slightly
	//motor[rightDrive] = -50;
	//motor[leftDrive] = -50;
	//wait1Msec(1500);
	//motor[rightDrive] = 0;
	//motor[leftDrive] = 0;

	//// Make a U-turn
	//motor[rightDrive] = 127;
	//motor[leftDrive] = -127;
	//wait1Msec(1075);
	//motor[rightDrive] = 0;
	//motor[leftDrive] = 0;

	//// Drive into scoring zone
	//motor[rightDrive] = 127;
	//motor[leftDrive] = 127;
	//wait1Msec(3000);
	//motor[rightDrive] = 0;
	//motor[leftDrive] = 0;

	//// Drop mobile goal
	//motor[goalLift] = -70;
	//wait1Msec(950);
	//motor[goalLift] = 0;

	//// Back up
	//motor[rightDrive] = -127;
	//motor[leftDrive] = -127;
	//wait1Msec(1000);
	//motor[rightDrive] = 0;
	//motor[leftDrive] = 0;

}

task usercontrol()
{
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;

	while(1 == 1)
	{
		// Tank Control
		motor[rightDrive] = vexRT[Ch2];
		motor[leftDrive]  = vexRT[Ch3];


		// Mobile Goal
		if(vexRT[Btn6U]){
			motor[goalLift] = 70;
			//wait1Msec(950);
		}
		else if(vexRT[Btn6D]){
			motor[goalLift] = -70;
			//wait1Msec(1000);
		}
		else {
			motor[goalLift] = 0;
		}

		// Yello Cone
		if(vexRT[Btn5UXmtr2]){
			motor[coneLift] = 55;
		}
		else if(vexRT[Btn5DXmtr2]){
			motor[coneLift] = -55;
		}
		else {
			motor[coneLift] = 0;
		}

		// Yello Cone Grabber
		if(vexRT[Btn6UXmtr2]){
			motor[coneGrabber] = 127;
		}
		else if(vexRT[Btn6DXmtr2]){
			motor[coneGrabber] = -127;
		}
		else {
			motor[coneGrabber] = 0;
		}

	}
}
