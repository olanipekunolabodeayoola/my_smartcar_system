//

#include "Motors.h"


/*******************************************/
// Class implementation (or member function definitions):
int Motors::GetMotorPin0()
{
  return inPin0;
}

int Motors::GetMotorPin1()
{
  return inPin1;
}

int Motors::GetMotorPin2()
{
  return inPin2;
}

int Motors::GetMotorPin3()
{
  return inPin3;
}

int Motors::GetMotorPin4()
{
  return inPin4;
}

void Motors::SetMotorPin0(int iP0)
{
	// pass value and initialize member data properly:
	inPin0 = iP0;

}

void Motors::SetMotorPin1(int iP1)
{
	// pass value and initialize member data properly:
	inPin1 = iP1;

}

void Motors::SetMotorPin2(int iP2)
{
	// pass value and initialize member data properly:
	inPin2 = iP2;

}

void Motors::SetMotorPin3(int iP3)
{
	// pass value and initialize member data properly:
	inPin3 = iP3;

}


void Motors::SetMotorPin4(int iP4)
{
	// pass value and initialize member data properly:
	inPin4 = iP4;

}

