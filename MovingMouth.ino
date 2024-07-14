#include <Servo.h>

int increment = 1;

Servo servo_7;
Servo servo_8;
Servo servo_9;
Servo servo_10;
Servo servo_11;
Servo servo_12;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  
  // Attach the servos and set initial positions
  servo_7.attach(7, 500, 2500);
  servo_12.attach(12, 500, 2500);

  servo_7.write(180); // Set initial position of servo 7 to 180
  servo_12.write(180); // Set initial position of servo 12 to 180
}

void loop()
{
  // if button press on A0 is detected
  if (digitalRead(A0) == HIGH) {
    tone(13, 100, 30);
    
    // Attach other servos
    servo_8.attach(8, 500, 2500);
    servo_9.attach(9, 500, 2500);
    servo_10.attach(10, 500, 2500);
    servo_11.attach(11, 500, 2500);
    
    // Set positions when button is pressed
    //while (HIGH){
      servo_7.write(160);
      servo_8.write(20);
      servo_9.write(0);
      servo_10.write(0);
      servo_11.write(20);
      servo_12.write(160);
      delay(15);
      servo_7.write(130);
      servo_8.write(50);
      servo_9.write(9);
      servo_10.write(9);
      servo_11.write(50);
      servo_12.write(130);
    //}
  } else {
    // Stop servos
      servo_7.write(180);
      servo_8.write(0);
      servo_9.write(0);
      servo_10.write(0);
      servo_11.write(0);
      servo_12.write(180);
    noTone(13);
  }
  
  delay(15);
}
