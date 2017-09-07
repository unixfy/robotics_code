
task main()
{
// chickfileric
// I'm getting really full dude
// David nu y
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
//WARNING: CONVICTED CRIMINAL KNOWN AS DAVID IS OUT TO GET YOUR CHAIR
//KEEP YOUR CHAIRS LOCKED UP IN A BULLETPROOF SAFE
