/* 
Aralinks Coding Education 
modified 27 April 2019
by Nikko Llanes
*/

#include <Servo.h>
int servoMotor =7;

Servo Servo1;
void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);       //Sound
  Servo1.attach(servoMotor); 

}
void loop() {
  Serial.print("Sound Value\t");
  int A_Sound = analogRead(A0);
  A_Sound = map(A_Sound, 800, 1023, 100, 0);
  Serial.println(A_Sound);//Sound Value
  delay(300);

  if (A_Sound > 50) {
  Servo1.write(90);
  
 }
  else {
  Servo1.write(180);
 }
}
