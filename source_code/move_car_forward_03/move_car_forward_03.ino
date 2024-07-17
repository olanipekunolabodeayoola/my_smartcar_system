// move_car_forward_03.ino
// d15m07y2024
// Credits: Adapted from Paul McWhorter's New Adruino Tutorial
// (See link: https://www.youtube.com/watch?v=v9TxES35wIw&list=PLGs0VKk2DiYxkoe2XNxDvVHqL5XG4dMWi&index=3)
// Observation: With this configuration, car moves forward correctly!
// Tidied up the code and added annotations.
//
// Setup pins. NOTE: Modified the pin numbers for the channels and motors
int ENA = 3;    // Pin 3 enables all Channels (i.e. Main Digital PWM Switch/Controller)
int IN1 = 5;    // Assign to Pin 5 (Channel A, represents pair of motors (wheels) on the right)
int IN2 = 6;    // " " " 6 (Channel B, reps pair of motors (wheels) on the left)
int IN3 = 7;    // " " " 7 (Direction of motors (wheels), where '1' reps forward, '0' means backward)
int IN4 = 8;    // " " " 8 (Direction of motors (wheels), where '1' reps forward, '0' means backward)
void setup() {
  // put your setup code here, to run once:
  pinMode(ENA,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  // Enable channels A and B:
  digitalWrite(ENA,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  // Make car go forward:
  digitalWrite(IN1,1);
  digitalWrite(IN2,1);
  digitalWrite(IN3,1);
  digitalWrite(IN4,1);

  delay(1000);    // Add delay for 1 second

}
