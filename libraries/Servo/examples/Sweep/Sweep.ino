/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards


void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {

  myservo.write(0);
  delay(2000); 

  myservo.write(60);
  delay(2000); 

  myservo.write(90);
  delay(2000); 

  myservo.write(120);
  delay(2000); 

  myservo.write(180);
  delay(2000); 
}

