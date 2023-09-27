/* 
Aralinks Coding Education 
modified 27 April 2019
by Dhenmar Labog
*/

int ledRed =7;
int ledGreen=8;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);       //Rain
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);  
}
void loop() {
  Serial.print("Rain Drop\t");
  int A_Rain = analogRead(A0);
  A_Rain = map(A_Rain, 800, 1023, 100, 0);
  Serial.println(A_Rain);//RAIN
  delay(300);

  if (A_Rain > 50) {
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
