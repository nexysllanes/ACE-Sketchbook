/* 
Aralinks Coding Education 
modified 27 April 2019
by Dhenmar Labog
*/

#include <Servo.h>

int servoMotor =7;

Servo Servo1;
void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);       //Rain
  Servo1.attach(servoMotor); 

}
void loop() {
  Serial.print("Rain Drop\t");
  int A_Rain = analogRead(A0);
  A_Rain = map(A_Rain, 800, 1023, 100, 0);
  Serial.println(A_Rain);//RAIN
  delay(300);

  if (A_Rain > 50) {
  Servo1.write(90);
  
 }
  else {
  Servo1.write(180);
 }
}
