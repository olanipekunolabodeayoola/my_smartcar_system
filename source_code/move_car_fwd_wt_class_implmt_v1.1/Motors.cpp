//

#include "Motors.h"


/*******************************************/
// Class implementation (or member function definitions):
int Motors::GetMotorPin()
{
  return inPin;
}


void Motors::SetMotorPin(int iP)
{
	// pass value and initialize member data properly:
	inPin = iP;

}

