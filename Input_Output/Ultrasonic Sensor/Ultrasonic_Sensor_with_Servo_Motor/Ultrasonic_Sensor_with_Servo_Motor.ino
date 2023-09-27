/* 
Aralinks Coding Education 
modified 27 April 2019
by Christian Dela Cruz
*/

//Ultrasonic with Servo Motor
#include <Ultrasonic.h>
#include <Servo.h>  

Ultrasonic ultrasonic(10,9); // (Trig PIN,Echo PIN)
int servoPin = 7;
Servo Servo1; 

void setup() {
Servo1.attach(servoPin);      
Serial.begin(9600);             // Starts the serial communication
}

void loop() {
 if(ultrasonic.Ranging(CM)<=6)       //if less than or equal to 6, servo will move 0 to 90 degrees
{
// Make servo go to 0 degrees 
Servo1.write(0); 
delay(500); 
// Make servo go to 90 degrees 
Servo1.write(90); 
delay(500); 
}

else{                     //else, no move happen
Servo1.write(0); 
delay(1000); 
}
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(ultrasonic.Ranging(CM));
delay(10);

}
