// Motor.cpp
// d24m08y2024
// Rationale: Named it 'Motor' as opposed to 'Motors' because in the future
// one can create an array of motors like in the example on p. 460
// of Horton & Van Weert, (2023).
// Goal: To move smartcar forward using class implementation
// Bibliography"
// 1.) McWhorter, (2020), Introduction to Robotics and Robot Training Tutorials
// 2.) Horton and Van Weert, (2023), C++ 23
//

#include "Motor.h"
#include<Arduino.h>

// Class definitions:
Motor::Motor() = default;    // Use 'default' keyword since body of constructor
Motor::~Motor() = default;    // contains no content and it is best practice

// Constructor initialized using member initializer list:
Motor::Motor(int f_pinNum):m_pinNumber{f_pinNum}
{
  //Serial.println("Motor single-argument constructor called.");
}

// Copy constructor to copy by reference hence, '&' operator:
Motor::Motor(const Motor& f_pinNum)
    :m_pinNumber{f_pinNum.m_pinNumber}
{
  //Serial.println("Motor copy constructor called.");
}

// Member function definitions:
void Motor::setPinNumber(int f_pinNum)
{
  m_pinNumber = f_pinNum;
}

int Motor::getPinNumber()
{
  return m_pinNumber;
}
