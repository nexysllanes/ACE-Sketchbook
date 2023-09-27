/* 
Aralinks Coding Education 
modified 24 April 2019
by Nikko Llanes
*/


void setup() {
  Serial.begin(9600);
  pinMode(A1, INPUT);       //Rain
}
void loop() {
  Serial.print("Rain Drop\t");
  int A_Rain = analogRead(A0);
  A_Rain = map(A_Rain, 800, 1023, 100, 0);
  Serial.println(A_Rain);//RAIN
  delay(300);
}
