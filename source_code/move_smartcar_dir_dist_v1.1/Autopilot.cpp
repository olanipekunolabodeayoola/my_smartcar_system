// Autopilot.cpp
// d26m08y2024
// Class implementation
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

#include "Autopilot.h"
#include<Arduino.h>    // Need to add <Arduino.h> preprocessor directive since it already appears in
// Motor.cpp class implementation

// Class definitions:
Autopilot::Autopilot() = default;    // Use 'default' keyword since body of the constructor
Autopilot::~Autopilot() = default;    // contains no content

// Constructor initialized using member initializer list (p. 464, Horton and Van Weert (2023)):
Autopilot::Autopilot(float f_linDisp, float f_angDisp, Motor f_pinNum)
    :m_linearDisp{f_linDisp}, m_angularDisp{f_angDisp}, m_pinNumber{f_pinNum}
{
  //Serial.println("Autopilot copy constructor called.");
}

// Copy constructor to copy by reference hence, '&' operator:
Autopilot::Autopilot(const Autopilot& f_linDisp, const Autopilot& f_angDisp, const Autopilot& f_pinNum)
    :m_linearDisp{f_linDisp.m_linearDisp}, m_angularDisp{f_angDisp.m_angularDisp}, m_pinNumber{f_pinNum.m_pinNumber}
{
  //Serial.println("Autopilot copy constructor called.");
}

// Member function definitions:
//void Autopilot::moveCarForward(float f_linDisp, Motor f_pinNum)
//{
//  m_pinNumber = f_pinNum;
//}

void Autopilot::moveCarForward(float f_linDisp, Motor f_pinNum1, Motor f_pinNum2, Motor f_pinNum3, Motor f_pinNum4)
{
  // Make car go forward:
  digitalWrite(f_pinNum1.getPinNumber(),1);
  digitalWrite(f_pinNum2.getPinNumber(),1);
  digitalWrite(f_pinNum3.getPinNumber(),1);
  digitalWrite(f_pinNum4.getPinNumber(),1);

  float f_Time = 0;    // Initialize time
  float a_Millisec = 1000;
  
  f_Time = (f_linDisp/1.0007804) * a_Millisec;    // Compute time (NOTE: Account for
                                                   // milliseconds)
  delay(f_Time);    // Add delay for 1 second
  //stopCar();    // Call function
}


void Autopilot::moveCarBackward(float f_linDisp, Motor f_pinNum1, Motor f_pinNum2, Motor f_pinNum3, Motor f_pinNum4)
{
  // Make car go backward:
  digitalWrite(f_pinNum1.getPinNumber(),1);
  digitalWrite(f_pinNum2.getPinNumber(),1);
  digitalWrite(f_pinNum3.getPinNumber(),0);
  digitalWrite(f_pinNum4.getPinNumber(),0);

  float f_Time = 0;    // Initialize time
  float a_Millisec = 1000;
  
  f_Time = (f_linDisp/1.0007804) * a_Millisec;    // Compute time (NOTE: Account for
                                                   // milliseconds)
  delay(f_Time);    // Add delay for 1 second
  //stopCar();    // Call function
}

void Autopilot::turnCarRight(float f_angDisp, Motor f_pinNum1, Motor f_pinNum2, Motor f_pinNum3, Motor f_pinNum4)
{
  // Make car turn right:
  digitalWrite(f_pinNum1.getPinNumber(),1);
  digitalWrite(f_pinNum2.getPinNumber(),1);
  digitalWrite(f_pinNum3.getPinNumber(),0);
  digitalWrite(f_pinNum4.getPinNumber(),1);
  
  float f_Time = 0;    // Initialize time
  float a_Millisec = 1000;

  // NOTE: The value of the divisor below was computed as the rate of angular
  // displacement during manual calibration process:
  f_Time = (f_angDisp/410) * a_Millisec;    // Compute time (NOTE: Account for
                                                   // milliseconds)
  //Serial.println("Time = ");
  //Serial.println(f_Time);
  //Serial.println("Angular Distance = ");
  //Serial.println(f_angDisp);
  
  delay(f_Time);    // Add delay for 1 second
  //stopCar();    // Call function

}

void Autopilot::turnCarLeft(float f_angDisp, Motor f_pinNum1, Motor f_pinNum2, Motor f_pinNum3, Motor f_pinNum4)
{
  // Make car turn right:
  digitalWrite(f_pinNum1.getPinNumber(),1);
  digitalWrite(f_pinNum2.getPinNumber(),1);
  digitalWrite(f_pinNum3.getPinNumber(),0);
  digitalWrite(f_pinNum4.getPinNumber(),1);
  
  float f_Time = 0;    // Initialize time
  float a_Millisec = 1000;

  // NOTE: The value of the divisor below was computed as the rate of angular
  // displacement during manual calibration process:
  f_Time = (f_angDisp/410) * a_Millisec;    // Compute time (NOTE: Account for
                                                   // milliseconds)
  //Serial.println("Time = ");
  //Serial.println(f_Time);
  //Serial.println("Angular Distance = ");
  //Serial.println(f_angDisp);
  
  delay(f_Time);    // Add delay for 1 second
  //stopCar();    // Call function

}



void Autopilot::stopCar(Motor f_pinNum1, Motor f_pinNum2, Motor f_pinNum3, Motor f_pinNum4)
{
  // Make car go forward:
  digitalWrite(f_pinNum1.getPinNumber(),0);
  digitalWrite(f_pinNum2.getPinNumber(),0);
  digitalWrite(f_pinNum3.getPinNumber(),0);
  digitalWrite(f_pinNum4.getPinNumber(),0);

  float a_Millisec = 1000;

  delay(a_Millisec);    // Add delay for 1 second
}
