// move_car_fwd_wt_class_implmt_v1.1.ino
// d22m07y2024
// Goal 1: Towards class implementation, header files and client code
// Goal 2: Using Arrays instead of regular variables
// References: 101.lv/learn/C++/htm, Demo 1 for SmartCarRobot
// v1.1
// Status: Success!
//
//#include<iostream>
#include "Motors.h"
/*******************************************/
// Global variables:

const int totalPins = 5;    // Total number of pins

int PinList[totalPins]{ 3,5,6,7,8 };    // Numbered list of pins

Motors myMotorPins[totalPins]{};    // If I intialize the array directly, it returns an error e.g.
                          // 'Motors myMotorPins[totalPins]{3,5,6,7,8};' returns an error

// Setup:
void setup() {
  // put your setup code here, to run once:

  for(int i =0; i < 5; ++i)
  {
    myMotorPins[i].SetMotorPin(PinList[i]);    // Call member access function to set pin
    pinMode(myMotorPins[i].GetMotorPin(),OUTPUT);    // ""
  }

  // Enable channel:
  digitalWrite(myMotorPins[0].GetMotorPin(),1);
  

}

// Loop:
void loop() {
  // put your main code here, to run repeatedly:
  // I feel the car will run slower because of this loop:
  for(int i = 1; i < 5; ++i)    // Note set i to 1 not 0, to account for the already enabled pin (see above)
  {
    digitalWrite(myMotorPins[i].GetMotorPin(),1);
  }

  delay(1000);    // Add delay for 1 second

}
