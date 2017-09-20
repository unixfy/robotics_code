
task main()
{
  while(1 == 1){
    motor[leftMotor]  = (vexRT[Ch2] + vexRT[Ch1])/2;  // (y + x)/2
    motor[rightMotor] = (vexRT[Ch2] - vexRT[Ch1])/2;  // (y - x)/2
  }

	if(vexRT[Btn6U]){
		setMotorSpeed(pultMotor, 127);
		wait1Msec(3000);
		setMotorSpeed(pultMotor, 0);
	}

}
