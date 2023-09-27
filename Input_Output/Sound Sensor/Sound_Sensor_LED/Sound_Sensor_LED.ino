/* 
Aralinks Coding Education 
modified 27 April 2019
by Nikko Llanes
*/

int ledRed =7;
int ledGreen=8;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);       //Sound Sensor
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);  
}
void loop() {
  Serial.print("Sound\t");
  int A_Sound = analogRead(A0);
  A_Sound = map(A_Sound, 800, 1023, 100, 0);
  Serial.println(A_Sound);//Sound Value
  delay(300);

  if (A_Sound > 50) {
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
