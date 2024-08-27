// Autopilot.h
// d26m08y2024
// Class header file
// Rationale: Attempt to decompose system functions and delegate
// guidance and control of SmartCar System to the AutoPilot module
// under the GuidanceAndControl Subsystem
// Goal: To move SmartCar forward using class implementation
// Bibliography:
// 1.) McWhorter, (2020), Introduction to Robotics and Robot Training Tutorials
// 2.) Horton and Van Weert, (2023), C++ 23
// 3.) Horton, I., (2014), Visual C++
// 4.) http://www.101.lv/learn/C++/
// 5.) Friedenthal, et al. (2015)
//

#include "Motor.h"    // Preprocessor directive to include 'Motor.h' header files

// Class declaration of prototypes:
class Autopilot
{
  public:
      Autopilot();    // User defined default constructor prototype
      ~Autopilot();    // " " " destructor " "

      explicit Autopilot(float f_linDisp, float f_angDisp, Motor f_pinNum);    // " " constructor
                                        // prototype with 'explicit' keyword
      Autopilot(const Autopilot& f_linDisp, const Autopilot& f_angDisp, const Autopilot& f_pinNum);    // User defined
                                        // copy constructor prototype
      // Member function prototype:
      void moveCarForward(float f_linDisp, Motor f_pinNum1, Motor f_pinNum2, Motor f_pinNum3, Motor f_pinNum4);
      void moveCarBackward(float f_linDisp, Motor f_pinNum1, Motor f_pinNum2, Motor f_pinNum3, Motor f_pinNum4);
      void turnCarRight(float f_angDisp, Motor f_pinNum1, Motor f_pinNum2, Motor f_pinNum3, Motor f_pinNum4);
      void turnCarLeft(float f_angDisp, Motor f_pinNum1, Motor f_pinNum2, Motor f_pinNum3, Motor f_pinNum4);
      void stopCar(Motor f_pinNum1, Motor f_pinNum2, Motor f_pinNum3, Motor f_pinNum4);

  private:
      float m_linearDisp;    // Member variable (Note the variable types)
      float m_angularDisp;
      Motor m_pinNumber;
};   // Never forget to add ';' to legitimize the class declaration
