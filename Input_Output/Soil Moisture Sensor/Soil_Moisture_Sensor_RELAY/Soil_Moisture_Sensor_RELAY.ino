/* 
Aralinks Coding Education 
modified 27 April 2019
by Gerald Llavore
*/

int Relay = 9;

void setup() {
  pinMode(A0, INPUT);       //PINMODE 
  pinMode(Relay, OUTPUT);
  
}
void loop() {
  
  int soil = analogRead(A0);

  if (soil < 1000) {
    digitalWrite (Relay, HIGH);
   }
  else {
digitalWrite (Relay, LOW);

   }
}
