/* 
Aralinks Coding Education 
modified 27 April 2019
by Christian Dela Cruz
*/

#include <Ultrasonic.h>
Ultrasonic ultrasonic(10,9); // (Trig PIN,Echo PIN)
int buzzer = 7;


void setup() {
pinMode(buzzer, OUTPUT);           // Sets the led as an Output

Serial.begin(9600);             // Starts the serial communication
}

void loop() {
 if(ultrasonic.Ranging(CM)<=6)       //if less than or equal to 6, buzzer will turn ON
{
tone(buzzer, 500);        //volume of the buzzer
delay(500);
}

else{                     //if the value is greater than 6 buzzer will turn OFF
noTone(buzzer);
}
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(ultrasonic.Ranging(CM));
delay(10);

}
