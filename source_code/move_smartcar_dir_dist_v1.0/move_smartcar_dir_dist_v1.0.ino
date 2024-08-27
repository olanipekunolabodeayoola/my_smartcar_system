// move_smartcar_dir_dist_v1.0.ino
// d25m08y2024
// Modification of 'move_car_dir_dist_02.ino' (See msi evo laptop and navigate
// to C:\Users\SysEng\Documents\Arduino\paul_mcwhorter_tutorials\arduino_tutorials_2019)
// Goal: To move smartcar forward using class implementation
// Bibliography"
// 1.) McWhorter, (2020), Introduction to Robotics and Robot Training Tutorials
// 2.) Horton and Van Weert, (2023), C++ 23
// 3.) http://www.101.lv/learn/C++/
//
//

#include "Motor.h"

// Declare global variable:
Motor enableAllPin {3};    // Create and initialize a Motor class objects...
Motor inputPin1 {5};
Motor inputPin2 {6};
Motor inputPin3 {7};
Motor inputPin4 {8};

float a_Millisec = 1000;    // Set time, i.e. 1000 milli second = 1 second
float a_Distance = 0;    // Initialize distance
int an_AngularDistance = 0;    // Initialize angular distance

// Declare global array variable:
// const int totalPins {5};    // Should be of type 'const' or else it
                        // cannot be used to specify array size
// Motor allFourMotors[totalPins]{enableAllPin, inputPin1, inputPin2, inputPin3, inputPin4};    // Create a Motor class array object

void setup() {
  // put your setup code here, to run once:
  // Turn serial monitor on:
  Serial.begin(9600);    // Specify baudrate of serial monitor

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
  // calibrate_forward();
  // calibrate_backward();
  // calibrate_right();
  a_Distance = 2;    // Set distance to specified value in meters
  an_AngularDistance = 180;    // Set angular distance to specified value in degrees
  
  // Call Function:
  moveCarForward(a_Distance);    // Pass value of distance in meters
  turnCarRight(an_AngularDistance);
  moveCarForward(a_Distance);
  turnCarLeft(an_AngularDistance);

  while(true)
  {
    // Indefinite pause/loop
  }

}

// User defined functions:
void moveCarForward(float f_Distance){
  // Make car go forward:
  digitalWrite(inputPin1.getPinNumber(),1);
  digitalWrite(inputPin2.getPinNumber(),1);
  digitalWrite(inputPin3.getPinNumber(),1);
  digitalWrite(inputPin4.getPinNumber(),1);

  float f_Time = 0;    // Initialize time
  f_Time = (f_Distance/1.0007804) * a_Millisec;    // Compute time (NOTE: Account for
                                                   // milliseconds)
  delay(f_Time);    // Add delay for 1 second
  stopCar();    // Call function
}

void moveCarBackward(float f_Distance){
  // Make car go backward:
  digitalWrite(inputPin1.getPinNumber(),1);
  digitalWrite(inputPin2.getPinNumber(),1);
  digitalWrite(inputPin3.getPinNumber(),0);
  digitalWrite(inputPin4.getPinNumber(),0);

  float f_Time = 0;    // Initialize time
  f_Time = (f_Distance/1.0007804) * a_Millisec;    // Compute time (NOTE: Account for
                                                   // milliseconds)
  delay(f_Time);    // Add delay for 1 second
  stopCar();    // Call function
}


void turnCarRight(float f_AngularDistance){
  // Make car turn right:
  digitalWrite(inputPin1.getPinNumber(),1);
  digitalWrite(inputPin2.getPinNumber(),1);
  digitalWrite(inputPin3.getPinNumber(),0);
  digitalWrite(inputPin4.getPinNumber(),1);
  
  float f_Time = 0;    // Initialize time

  // NOTE: The value of the divisor below was computed as the rate of angular
  // displacement during manual calibration process:
  f_Time = (f_AngularDistance/410) * a_Millisec;    // Compute time (NOTE: Account for
                                                   // milliseconds)
  Serial.println("Time = ");
  Serial.println(f_Time);
  Serial.println("Angular Distance = ");
  Serial.println(f_AngularDistance);
  
  delay(f_Time);    // Add delay for 1 second
  stopCar();    // Call function

}


void turnCarLeft(float f_AngularDistance){
  // Make car turn right:
  digitalWrite(inputPin1.getPinNumber(),1);
  digitalWrite(inputPin2.getPinNumber(),1);
  digitalWrite(inputPin3.getPinNumber(),1);
  digitalWrite(inputPin4.getPinNumber(),0);
  
  float f_Time = 0;    // Initialize time

  // NOTE: The value of the divisor below was computed as the rate of angular
  // displacement during manual calibration process:
  f_Time = (f_AngularDistance/410) * a_Millisec;    // Compute time (NOTE: Account for
                                                   // milliseconds)
  Serial.println("Time = ");
  Serial.println(f_Time);
  Serial.println("Angular Distance = ");
  Serial.println(f_AngularDistance);
  
  delay(f_Time);    // Add delay for 1 second
  stopCar();    // Call function

}

void stopCar(){
  // Make car go forward:
  digitalWrite(inputPin1.getPinNumber(),0);
  digitalWrite(inputPin2.getPinNumber(),0);
  digitalWrite(inputPin3.getPinNumber(),0);
  digitalWrite(inputPin4.getPinNumber(),0);

  delay(a_Millisec);    // Add delay for 1 second
}
