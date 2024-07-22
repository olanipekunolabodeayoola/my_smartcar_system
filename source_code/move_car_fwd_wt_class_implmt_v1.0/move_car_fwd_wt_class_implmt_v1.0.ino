// move_car_fwd_wt_class_implmt_v1.0.ino
// d21m07y2024
// Goal 1: Towards class implementation, header files and client code
// Goal 2: Attempt to eliminate use of global variable
// References: 101.lv/learn/C++/htm, Demo 1 for SmartCarRobot
// v1.0
// Status: Works well!!!
//
//#include<iostream>
#include "Motors.h"
/*******************************************/
// Global variables:

// Motors myMotorPins, enablePin, inputPin1, inputPin2, inputPin3, inputPin4;
Motors enablePin, inputPin1, inputPin2, inputPin3, inputPin4;

// Setup:
void setup() {
  // put your setup code here, to run once:
  //LED myLEDPin;    // Declare an object of the class LEDIOPin

  //myLEDPin.SetLEDPin(13);    // Call member access function to set pin
  //LEDPin = myLEDPin.GetLEDPin();    // Call member access function to get pin

  enablePin.SetMotorPin0(3);    // Call member access function to set pin
  inputPin1.SetMotorPin1(5);
  inputPin2.SetMotorPin2(6);
  inputPin3.SetMotorPin3(7);
  inputPin4.SetMotorPin4(8);

  pinMode(enablePin.GetMotorPin0(),OUTPUT);
  pinMode(inputPin1.GetMotorPin1(),OUTPUT);
  pinMode(inputPin2.GetMotorPin2(),OUTPUT);
  pinMode(inputPin3.GetMotorPin3(),OUTPUT);
  pinMode(inputPin4.GetMotorPin4(),OUTPUT);

  // Enable channel:
  digitalWrite(enablePin.GetMotorPin0(),1);
  

}

// Loop:
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(inputPin1.GetMotorPin1(),1);
  digitalWrite(inputPin2.GetMotorPin2(),1);
  digitalWrite(inputPin3.GetMotorPin3(),1);
  digitalWrite(inputPin4.GetMotorPin4(),1);

  delay(1000);    // Add delay for 1 second

}
