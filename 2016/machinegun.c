#pragma config(Motor,  port2,           rightdrivemotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftdrivemotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           pushers,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           leftarm,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           rightarm,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           claw,          tmotorVex393_MC29, openLoop)


task main()
{
  while(1 == 1)
  {
    motor[rightdrivemotor] = vexRT[Ch2];
    motor[leftdrivemotor]  = vexRT[Ch3];
    if(motor[pushers] = vexRT[])

  }
}
