/* 
Aralinks Coding Education 
modified 27 April 2019
by Christian Dela Cruz
*/

#include <Ultrasonic.h>
Ultrasonic ultrasonic(9,8); // (Trig PIN,Echo PIN)
int led1 = 13;
int led2 = 12;

void setup() {
pinMode(led1, OUTPUT);           // Sets the led1 as an Output
pinMode(led2, OUTPUT);           // Sets the led2 as an Output
Serial.begin(9600);             // Starts the serial communication
}

void loop() {
 if(ultrasonic.Ranging(CM)<=6)       //if less than or equal to 6, LED1 will turn ON
{
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
}

else{                     //if the value is greater than 6 LED1 will off then LED2 will turn ON
digitalWrite(led2, HIGH);
digitalWrite(led1, LOW);
}
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(ultrasonic.Ranging(CM));
delay(10);

}
