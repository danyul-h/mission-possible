#pragma config(Motor,  port2,           backRight,     tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port3,           backLeft,      tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port8,           frontLeft,     tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port9,           frontRight,    tmotorVex393HighSpeed_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//declaring method headers
void moveForward(){}
void rightTurn(){}

task main()
{
	moveForward();
	rightTurn();
	moveForward();
	rightTurn();
	moveForward();
	rightTurn();
	moveForward();
}

task rightTurn()
{
	startMotor(backRight, 60);
	startMotor(backLeft, 60);
	startMotor(frontRight, 60);
	startMotor(frontLeft, 60);
	wait(1.2);
	stopMotor(backRight);
	stopMotor(backLeft);
	stopMotor(frontRight);
	stopMotor(frontLeft);
}

task moveForward()
{
	startMotor(backRight, -60);
	startMotor(backLeft, 60);
	startMotor(frontRight, -60);
	startMotor(frontLeft, 60);
	wait(1.2);
	stopMotor(backRight);
	stopMotor(backLeft);
	stopMotor(frontRight);
	stopMotor(frontLeft);
}
