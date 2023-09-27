/* 
Aralinks Coding Education 
modified 27 April 2019
by Gerald Llavore
*/
                          
                          //definte 3 variables
int sensorPin = A0;     //the first one defines the analog pin of the arduino
int sensorValue;        //the second defines  the analog  value of the sensor read by arduino
int limit = 300;        // the second 

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {

  sensorValue = analogRead(sensorPin);
  Serial.print("Analog Value:");
  Serial.println(sensorValue);


  if (sensorValue<limit) {
    digitalWrite(13,HIGH);
    }
  else{
    digitalWrite(13,LOW );
  }
  delay(1000);
}
