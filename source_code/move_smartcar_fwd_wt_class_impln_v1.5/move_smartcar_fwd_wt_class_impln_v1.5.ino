// move_smartcar_fwd_wt_class_impln_v1.5
// d24m08y2024
// Goal: To move smartcar forward using class implementation
// Bibliography"
// 1.) McWhorter, (2020), Introduction to Robotics and Robot Training Tutorials
// 2.) Horton and Van Weert, (2023), C++ 23
// 3.) http://www.101.lv/learn/C++/
//

#include "Motor.h"

// Declare global variable:
Motor enableAllPin {3};    // Create and initialize a Motor class objects...
Motor inputPin1 {5};
Motor inputPin2 {6};
Motor inputPin3 {7};
Motor inputPin4 {8};

// Declare global array variable:
// const int totalPins {5};    // Should be of type 'const' or else it
                        // cannot be used to specify array size
// Motor allFourMotors[totalPins]{enableAllPin, inputPin1, inputPin2, inputPin3, inputPin4};    // Create a Motor class array object

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);    // Specify baudrate of serial monitor
  Serial.println(enableAllPin.getPinNumber());    // Retrieve and display pin numbers, respectively...
  Serial.println(inputPin1.getPinNumber());
  Serial.println(inputPin2.getPinNumber());
  Serial.println(inputPin3.getPinNumber());
  Serial.println(inputPin4.getPinNumber());
    
    
  // Setup pins:
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
  // Send signals to respective pins, so as to drive smartcar forward:
  digitalWrite(inputPin1.getPinNumber(),1);
  digitalWrite(inputPin2.getPinNumber(),1);
  digitalWrite(inputPin3.getPinNumber(),1);
  digitalWrite(inputPin4.getPinNumber(),1);
  
  delay(1000);    // Add delay for 1 second

}
