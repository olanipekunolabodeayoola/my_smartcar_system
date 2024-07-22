//
#include<arduino.h>

// Class declaration:
class Motors
{
  // Add constructor and destructor here later
  public:
      int GetMotorPin0();    // Member access function prototype
      int GetMotorPin1();
      int GetMotorPin2();
      int GetMotorPin3();
      int GetMotorPin4();

      void SetMotorPin0(int inPin0);    // ""
      void SetMotorPin1(int inPin1);
      void SetMotorPin2(int inPin2);
      void SetMotorPin3(int inPin3);
      void SetMotorPin4(int inPin4);
  private:
      int inPin0;
      int inPin1;
      int inPin2;
      int inPin3;
      int inPin4;

};

