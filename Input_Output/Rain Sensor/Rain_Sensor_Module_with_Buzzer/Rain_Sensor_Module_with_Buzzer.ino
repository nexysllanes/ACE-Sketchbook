/* 
Aralinks Coding Education 
modified 27 April 2019
by Dhenmar Labog
*/

int buzzer =7;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);       //Rain
  pinMode(buzzer, OUTPUT);  
}
void loop() {
  Serial.print("Rain Drop\t");
  int A_Rain = analogRead(A0);
  A_Rain = map(A_Rain, 800, 1023, 100, 0);
  Serial.println(A_Rain);//RAIN
  delay(300);

  if (A_Rain > 50) {
    tone(buzzer, 500);
  }
  else {
    noTone(buzzer);
    }
}
