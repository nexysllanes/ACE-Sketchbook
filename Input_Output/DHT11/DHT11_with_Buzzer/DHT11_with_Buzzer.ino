/* 
Aralinks Coding Education 
modified 27 April 2019
by Nikko Llanes
*/


#include<dht.h>// DHT11 humidity sensor library
dht DHT; //Creating sensor object
#define DHT11_PIN 2 // Sensor is connected to Arduino pin 2

int temp;
int buzzer =7;

void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT);       //DHT11
  pinMode(buzzer, OUTPUT);
    
}
void loop() {
  int chk = DHT.read11(DHT11_PIN); //Reading data from sensor
  temp = DHT.temperature;
  
  Serial.print(DHT.temperature,0);//prints obtained temperature on serial port
  Serial.println(" degrees");
  delay(500);

  if (temp > 30) {
    tone(buzzer, 500);
  }
  else {
    noTone(buzzer);
    }
}
