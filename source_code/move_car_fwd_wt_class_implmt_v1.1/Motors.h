//
#include<arduino.h>

// Class declaration:
class Motors
{
  // Add constructor and destructor here later
  public:
      int GetMotorPin();    // Member access function prototype
      void SetMotorPin(int inPin);    // ""
  private:
      int inPin;

};

