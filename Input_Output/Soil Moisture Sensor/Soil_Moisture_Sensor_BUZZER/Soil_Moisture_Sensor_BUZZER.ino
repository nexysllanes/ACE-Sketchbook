/* 
Aralinks Coding Education 
modified 27 April 2019
by Gerald Llavore
*/

int soilmoisture = A0;     //The soil moisture analog in no.                       
int sensorvalue = 0;         //Sensorvalue will start to 0.                
int buzzer = 7;                  //The buzzer pin no.                 

void setup() {
 Serial.begin(9600);        //Open Serial monitor
 pinMode(soilmoisture, INPUT);  //Soil moisture sensor as an input
 pinMode(buzzer, OUTPUT);   //Buzzer as an output
}

void loop() {
  sensorvalue = analogRead(soilmoisture);  //Read the moisture from sensor
  Serial.println(sensorvalue);      //Will print the value in serial monitor
  delay(1000);          //Refresh every 1sec.

  if (sensorvalue <=1000)   //If the sensor value is <=1000 then, it will produce sounds from the buzzer
  {
  tone(buzzer, 500);
  }
  else          //Then, if its not <=1000 the buzzer will stay off.
{
  noTone(buzzer);
 }
}
