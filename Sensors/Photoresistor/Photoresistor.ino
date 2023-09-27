/* 
Aralinks Coding Education 
modified 24 April 2019
by Nikko Llanes
*/

int Pr = 0; // will be used for analog 0.

int PrValue = 0; // value of output

int Pr_Input = 19; // value of when light is on

void setup() {

Serial.begin(9600); //start serial Monitor

pinMode(8, OUTPUT); // pin 8 as output

}

void loop() {

PrValue = analogRead(Pr);

Serial.println(PrValue); //prints photoresistor value

delay(100); // value updated every 0.1 second.

if (PrValue < Pr_Input) // if sensor value is less than 19, light will turn on.

{ digitalWrite(8, HIGH);//LED on } else { digitalWrite(8, LOW);// LED off }

}
}
