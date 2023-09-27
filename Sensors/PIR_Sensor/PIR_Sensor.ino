/* 
Aralinks Coding Education 
modified 24 April 2019
by Nikko Llanes
*/

// Definition of PINs
int pirPin = 2; // the Arduino PIN to which the sensor is connected
int ledPin = 13; // the PIN to which the LED is connected

// Sensor calibration time
int calibrationTime = 15;

// The time when the output is low
long unsigned int lowIn;

// value of milliseconds, for which it is believed that there is "stillness"
long unsigned int pause = 5000;

boolean lockLow = true;
boolean takeLowTime;

// Setting the sensor
void setup () {
  Serial.begin (9600);
  pinMode (pirPin, INPUT);
  pinMode (ledPin, OUTPUT);
  digitalWrite (pirPin, LOW);

  // Calibration phase
  Serial.print ("Sensor calibration");
  for (int i = 0; i <calibrationTime; i ++) {
    Serial.print ( ".");
    delay (1000);
  }
  Serial.println ("Done");
  Serial.println ("ACTIVE SENSOR");
  delay (50);
}
void loop () {

  // This IF allows to establish if the sensor detects a moving object
  if (digitalRead (pirPin) == HIGH) {
    digitalWrite (ledPin, HIGH); // Turn on the LED
    if (lockLow) {

      lockLow = false;
      Serial.println ( "---");
      Serial.print ("Motion detected at");
      Serial.print (millis () / 1000);
      Serial.println ("sec");
      delay (50);
    }
    takeLowTime = true;
  }
// This IF allows to establish if there is no more movement
  if (digitalRead (pirPin) == LOW) {
    digitalWrite (ledPin, LOW); // The LED goes out

    if (takeLowTime) {
      lowIn = millis ();
      takeLowTime = false;
    }
if (! lockLow && millis () - lowIn> pause) {

      lockLow = true;
      Serial.print ("Movement terminated at"); // output
      Serial.print ((millis () - pause) / 1000);
      Serial.println ("sec");
      delay (50);
    }
  }
}
