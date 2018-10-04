
task main()
{
	int speed;

	while (speed>100)
	{

		motor[motorA] = 100;
		motor[motorB] = speed;
		wait1Msec(50);

		speed = speed + 1;
	}

	motor[motorA] = 100;
	motor[motorB] = 100;
	wait1Msec(5000);


}
