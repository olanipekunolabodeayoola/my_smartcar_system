// move_smartcar_dir_dist_v1.1
// d26m08y2024
// Drive program / client code
// Goal: An attempt to move car forward this time delegating
// guidance and control to an AutoPilot class as opposed to
// using regular functions
// Bibliography"
// Bibliography:
// 1.) McWhorter, (2020), Introduction to Robotics and Robot Training Tutorials
// 2.) Horton and Van Weert, (2023), C++ 23
// 3.) Horton, I., (2014), Visual C++
// 4.) http://www.101.lv/learn/C++/
// 5.) Friedenthal, et al. (2015)
// To do:
// 1.) Instead of using literals to initialize the Autopilot class object, implement a
//     single parameter constructor using the explicit keyword.
// 2.) Next, test the single parameter constructor in the driver program and initialize
//     the three parameter Autopilot object using their single parameter counterparts.
// 3.) Next, implement member access functions for moveCarForward(...) that pass an
//     array of Motor type as parameter to initialize the pin numbers.
//

//#include "Motor.h" (Can only be included once; duplicate headers will trigger and error
#include "Autopilot.h"

// Declare global variable:
Motor enableAllPin {3};    // Create and initialize class objects, accordingly
Motor inputPin1 {5};
Motor inputPin2 {6};
Motor inputPin3 {7};
Motor inputPin4 {8};

//Autopilot a_LinearDisp{2.0,,};    // Define a single parameter constructor

Autopilot pilotOne{2.0,2,enableAllPin};    // Create an object of Autopilot class...
                                       // and initialize the same using literals and Motor type

float a_Millisec = 1000;    // Set time, i.e. 1000 milli second = 1 second



void setup() {
  // put your setup code here, to run once:
  // Turn serial monitor on:
  Serial.begin(9600);    // Specify baudrate of serial monitor

  // Setup pins:x
  pinMode(enableAllPin.getPinNumber(),OUTPUT);
  pinMode(inputPin1.getPinNumber(),OUTPUT);
  pinMode(inputPin2.getPinNumber(),OUTPUT);
  pinMode(inputPin3.getPinNumber(),OUTPUT);
  pinMode(inputPin4.getPinNumber(),OUTPUT);

  // Activate main pin:
  digitalWrite(enableAllPin.getPinNumber(),HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

  // Call functions:
  // NOTE: Pay attention to the arguments passed as well as their units
  // ( e.g. meters, radians, etc)
  pilotOne.moveCarForward(2.0,inputPin1,inputPin2,inputPin3,inputPin4);    // NOTE: Pay attention to the arguments passed!
  pilotOne.stopCar(inputPin1,inputPin2,inputPin3,inputPin4);
  pilotOne.turnCarRight(180,inputPin1,inputPin2,inputPin3,inputPin4);    // NOTE: Pay attention to the arguments passed!
  pilotOne.stopCar(inputPin1,inputPin2,inputPin3,inputPin4);
  pilotOne.moveCarForward(2.0,inputPin1,inputPin2,inputPin3,inputPin4);
  pilotOne.stopCar(inputPin1,inputPin2,inputPin3,inputPin4);
  pilotOne.turnCarLeft(180,inputPin1,inputPin2,inputPin3,inputPin4);
  pilotOne.stopCar(inputPin1,inputPin2,inputPin3,inputPin4);

  while(true)
  {
    // Indefinite pause/loop
  }

}
