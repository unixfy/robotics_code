#pragma config(Motor,  port2,           leftDrive,     tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port4,           rightDrive,    tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port6,           armMotor,      tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port7,           clawMotor1,    tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port9,           flipperz,      tmotorServoContinuousRotation, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

// Motors by default: + CW, - CCW
// Jumper IN  = 1 (touch)
// Jumper OUT = 0 (touch)
// Analog NOT PRESSED = 249; (touch as potentiometer; values are +-1)
// Analog PRESSED     = 5; (touch as potentiometer; values are +-1)

/*
jmp1  = 0: motor 1 flipped
jmp2  = 0: motor 2 flipped
jmp3  = 0: motor 3 flipped
jmp4  = 0: motor 4 flipped
jmp5  = 0: motor 5 flipped
jmp6  = 0: motor 6 flipped
jmp7  = 0: motor 7 flipped
jmp8  = 0: motor 8 flipped
jmp9  = 0: motor 9 flipped
jmp10 = 0: motor 10 flipped

jmp11 = 0 && jmp12 = 0: Single Driver TANK
jmp11 = 1 && jmp12 = 0: Dual Driver   TANK
jmp11 = 0 && jmp12 = 1: Single Driver ARCADE
jmp11 = 1 && jmp12 = 1: Dual Driver   ARCADE

ana1  < 200: motor 6 IGNORE CCW
ana2  < 200: motor 6 IGNORE CW
ana3  < 200: motor 7 IGNORE CCW
ana4  < 200: motor 7 IGNORE CW
ana5  < 200: motor 8 IGNORE CCW
ana6  < 200: motor 8 IGNORE CW
ana7  < 200: motor 9 IGNORE CCW
ana8  < 200: motor 9 IGNORE CW
*/


task main()
{
	int ana_1 = 0;
	int ana_2 = 0;
	int ana_3 = 0;
	int ana_4 = 0;
	int ana_5 = 0;
	int ana_6 = 0;
	int ana_7 = 0;
	int ana_8 = 0;

	while(true)
	{
		//GLOBAL CHANGES & CHECKS:
		bMotorReflected[LeftDrive1]   = (bool)SensorValue[jmp1];
		bMotorReflected[LeftDrive2]   = (bool)SensorValue[jmp2];
		bMotorReflected[LeftDrive3]   = (bool)SensorValue[jmp3];
		bMotorReflected[RightDrive4]  = (bool)SensorValue[jmp4];
		bMotorReflected[RightDrive5]  = (bool)SensorValue[jmp5];
		bMotorReflected[Mech1]        = (bool)SensorValue[jmp6];
		bMotorReflected[Mech2]        = (bool)SensorValue[jmp7];
		bMotorReflected[Mech3]        = (bool)SensorValue[jmp8];
		bMotorReflected[Mech4]        = (bool)SensorValue[jmp9];
		bMotorReflected[RightDrive10] = (bool)SensorValue[jmp10];

		if(SensorValue[ana1] < 200)
			ana_1 = 0;
		else
			ana_1 = 1;

		if(SensorValue[ana2] < 200)
			ana_2 = 0;
		else
			ana_2 = 1;

		if(SensorValue[ana3] < 200)
			ana_3 = 0;
		else
			ana_3 = 1;

		if(SensorValue[ana4] < 200)
			ana_4 = 0;
		else
			ana_4 = 1;

		if(SensorValue[jmp11] == 0 && SensorValue[jmp12] == 0)      // if !jmp11 && !jmp12:----------------| SINGLE DRIVER - TANK |----------------------------------------
		{
			if(SensorValue[ana5] < 200)
				ana_5 = 0;
			else
				ana_5 = 1;

			if(SensorValue[ana6] < 200)
				ana_6 = 0;
			else
				ana_6 = 1;

			if(SensorValue[ana7] < 200)
				ana_7 = 0;
			else
				ana_7 = 1;

			if(SensorValue[ana8] < 200)
				ana_8 = 0;
			else
				ana_8 = 1;

			motor[LeftDrive1]   = vexRT[Ch3];       // up = CW
			motor[LeftDrive2]   = vexRT[Ch3];       // up = CW
			motor[LeftDrive3]   = vexRT[Ch3];       // up = CW
			motor[RightDrive4]  = -vexRT[Ch2];      // up = CCW
			motor[RightDrive5]  = -vexRT[Ch2];      // up = CCW
			motor[Mech1]        = ((vexRT[Btn5U] * 127) * ana_2) - ((vexRT[Btn5D] * 127) * ana_1);   // U = CW, D = CCW
			motor[Mech2]        = ((vexRT[Btn6U] * 127) * ana_4) - ((vexRT[Btn6D] * 127) * ana_3);   // U = CW, D = CCW
			motor[Mech3]        = ((vexRT[Btn7U] * 127) * ana_6) - ((vexRT[Btn7D] * 127) * ana_5);   // U = CW, D = CCW
			motor[Mech4]        = ((vexRT[Btn8U] * 127) * ana_8) - ((vexRT[Btn8D] * 127) * ana_7);   // U = CW, D = CCW
			motor[RightDrive10] = -vexRT[Ch2];        // up = CCW
		}
		//---------------------------------------------------------------------------------------------------------------------------------------------------------------------
		// if jmp11 && !jmp12:----------------------| DUAL DRIVER - TANK |-----------------------------------------------------------------------------------------------------
		else if(SensorValue[jmp11] == 1 && SensorValue[jmp12] == 0)
		{
			motor[LeftDrive1]   = vexRT[Ch3];       // up = CW
			motor[LeftDrive2]   = vexRT[Ch3];       // up = CW
			motor[LeftDrive3]   = vexRT[Ch3];       // up = CW
			motor[RightDrive4]  = -vexRT[Ch2];      // up = CCW
			motor[RightDrive5]  = -vexRT[Ch2];      // up = CCW
			motor[Mech1]        = ((vexRT[Btn5UXmtr2] * 127) * ana_2) - ((vexRT[Btn5DXmtr2] * 127) * ana_1);   // U = CW, D = CCW
			motor[Mech2]        = ((vexRT[Btn6UXmtr2] * 127) * ana_4) - ((vexRT[Btn6DXmtr2] * 127) * ana_3);   // U = CW, D = CCW

			if((SensorValue[ana_6] < 200 && vexRT[Ch3Xmtr2] > 0) || (SensorValue[ana_5] < 200 && vexRT[Ch3Xmtr2] < 0))
			{
				motor[Mech3]        = 0;
			}
			else
			{
				motor[Mech3]        = vexRT[Ch3Xmtr2];  // up = CW
			}

			if((SensorValue[ana_8] < 200 && vexRT[Ch2Xmtr2] > 0) || (SensorValue[ana_7] < 200 && vexRT[Ch2Xmtr2] < 0))
			{
				motor[Mech4]        = 0;
			}
			else
			{
				motor[Mech4]        = (vexRT[Ch2Xmtr2]);  // up = CW
			}

			motor[RightDrive10] = -vexRT[Ch2];        // up = CCW
		}
		//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
		else if(SensorValue[jmp11] == 0 && SensorValue[jmp12] == 1)    // if !jmp11 && jmp12:---------------------| SINGLE DRIVER - ARCADE |-------------------------------------
		{
			motor[LeftDrive1]   = vexRT[Ch1] + vexRT[Ch2];       // up = CW, right = CW
			motor[LeftDrive2]   = vexRT[Ch1] + vexRT[Ch2];       // up = CW, right = CW
			motor[LeftDrive3]   = vexRT[Ch1] + vexRT[Ch2];       // up = CW, right = CW
			motor[RightDrive4]  = vexRT[Ch1] - vexRT[Ch2];       // up = CW, right = CCW
			motor[RightDrive5]  = vexRT[Ch1] - vexRT[Ch2];       // up = CW, right = CCW
			motor[Mech1]        = ((vexRT[Btn5U] * 127) * ana_2) - ((vexRT[Btn5D] * 127) * ana_1);   // U = CW, D = CCW
			motor[Mech2]        = ((vexRT[Btn6U] * 127) * ana_4) - ((vexRT[Btn6D] * 127) * ana_3);   // U = CW, D = CCW

			if((SensorValue[ana_6] < 200 && vexRT[Ch3] > 0) || (SensorValue[ana_5] < 200 && vexRT[Ch3] < 0))
			{
				motor[Mech3]        = 0;
			}
			else
			{
				motor[Mech3]        = vexRT[Ch3];  // up = CW
			}

			if((SensorValue[ana_8] < 200 && (-vexRT[Ch4]) > 0) || (SensorValue[ana_7] < 200 && (-vexRT[Ch4]) < 0))
			{
				motor[Mech4]        = 0;
			}
			else
			{
				motor[Mech4]        = (-vexRT[Ch4]);  // right = CCW
			}
			motor[RightDrive10] = vexRT[Ch1] - vexRT[Ch2];       // up = CW, right = CCW
		}
		//---------------------------------------------------------------------------------------------------------------------------------------------------------------------
		else if(SensorValue[jmp11] == 1 && SensorValue[jmp12] == 1)    // if jmp11 && jmp12:---------------------| DUAL DRIVER - ARCADE |--------------------------------------
		{
			motor[LeftDrive1]   = vexRT[Ch1] + vexRT[Ch2];       // up = CW, right = CW
			motor[LeftDrive2]   = vexRT[Ch1] + vexRT[Ch2];       // up = CW, right = CW
			motor[LeftDrive3]   = vexRT[Ch1] + vexRT[Ch2];       // up = CW, right = CW
			motor[RightDrive4]  = vexRT[Ch1] - vexRT[Ch2];       // up = CW, right = CCW
			motor[RightDrive5]  = vexRT[Ch1] - vexRT[Ch2];       // up = CW, right = CCW
			motor[Mech1]        = ((vexRT[Btn5UXmtr2] * 127) * ana_2) - ((vexRT[Btn5DXmtr2] * 127) * ana_1);   // U = CW, D = CCW
			motor[Mech2]        = ((vexRT[Btn6UXmtr2] * 127) * ana_4) - ((vexRT[Btn6DXmtr2] * 127) * ana_3);   // U = CW, D = CCW

			if((SensorValue[ana_6] < 200 && vexRT[Ch3Xmtr2] > 0) || (SensorValue[ana_5] < 200 && vexRT[Ch3Xmtr2] < 0))
			{
				motor[Mech3]        = 0;
			}
			else
			{
				motor[Mech3]        = vexRT[Ch3Xmtr2];  // up = CW
			}

			if((SensorValue[ana_8] < 200 && vexRT[Ch2Xmtr2] > 0) || (SensorValue[ana_7] < 200 && vexRT[Ch2Xmtr2] < 0))
			{
				motor[Mech4]        = 0;
			}
			else
			{
				motor[Mech4]        = (vexRT[Ch2Xmtr2]);  // up = CW
			}

			motor[RightDrive10] = vexRT[Ch1] - vexRT[Ch2];       // up = CW, right = CCW
		}
		//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
	}
}
