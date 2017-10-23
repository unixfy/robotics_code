#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port5,           leftMotor,     tmotorVex393_MC29, openLoop, reversed, driveLeft, encoderPort, I2C_1)
#pragma config(Motor,  port9,           rightMotor,    tmotorVex393_MC29, openLoop, driveRight, encoderPort, I2C_2)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*+++++++++++++++++++++++++++++++++++++++++++++| Notes |++++++++++++++++++++++++++++++++++++++++++++++
Forward for Distance with IME

Robot Model(s): VEX Clawbot

[I/O Port]          [Name]              [Type]                [Description]
Motor Port 1        leftMotor           393 Motor             Left side motor
Motor Port 10       rightMotor          393 Motor             Right side motor, Reversed
I2C_1               leftIEM             Integrated Encoder    Encoted mounted on leftMotor
I2C_2               rightIEM            Integrated Encoder    Encoder mounted on rightMotor
----------------------------------------------------------------------------------------------------*/

task main()
{
  wait1Msec(2000);

  resetMotorEncoder(leftMotor);
  resetMotorEncoder(rightMotor);

  while(getMotorEncoder(rightMotor) < 1800)
  {
    motor[rightMotor] = 63;
    motor[leftMotor] = 63;
  }

  motor[rightMotor] = 0;
  motor[leftMotor] = 0;
}
