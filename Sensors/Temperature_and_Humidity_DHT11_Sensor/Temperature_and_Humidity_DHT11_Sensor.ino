/* 
Aralinks Coding Education 
modified 24 April 2019
by Nikko Llanes

Go ahead and navigate here to download the library. 

https://github.com/adafruit/DHT-sensor-library

Copy the Library to Documents/Arduino/libraries


*/

#include "DHT.h"

#define DHTPIN 2     // what pin we're connected to

#define DHTTYPE DHT11   // DHT 11 

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT test");

  dht.begin();
}
void loop() {
  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  float t = dht.readTemperature();
 // check if returns are valid, if they are NaN (not a number) then something went wrong!
  if (isnan(t) || isnan(h)) {
    Serial.println("Failed to read from DHT");
  } else {
    Serial.print("Humidity: ");
    Serial.print(h);
    Serial.print(" %\t");
    Serial.print("Temperature: ");
    Serial.print(t);
    Serial.println(" *C");
  }
}
