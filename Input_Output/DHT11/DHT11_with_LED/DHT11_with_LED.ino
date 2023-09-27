/* 
Aralinks Coding Education 
modified 27 April 2019
by Nikko Llanes
*/

#include<dht.h>// DHT11 humidity sensor library
dht DHT; //Creating sensor object
#define DHT11_PIN 2 // Sensor is connected to Arduino pin 2

int temp;

int ledRed =7;
int ledGreen=8;

void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT);       //DHT11
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);  
}
void loop() {
  int chk = DHT.read11(DHT11_PIN); //Reading data from sensor
  temp = DHT.temperature;
  
   Serial.print(DHT.temperature,0);//prints obtained temperature on serial port
  Serial.println(" degrees");
  delay(500);

  if (temp < 25) {
    digitalWrite(ledGreen, HIGH);
    delay(100);
    digitalWrite(ledRed, LOW);
  }
  else {
    digitalWrite(ledRed, HIGH);
    delay(100);
    digitalWrite(ledGreen, LOW);
    }
}
