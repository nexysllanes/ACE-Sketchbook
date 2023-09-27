/* 
Aralinks Coding Education 
modified 27 April 2019
by Dhenmar Labog
*/


// include the library code:
#include <Wire.h>
#include <LiquidCrystal_I2C.h>



//I2C pins declaration
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); 


void setup() {
  pinMode(A0, INPUT);       //Rain
  
}
void loop() {
  
lcd.begin(16,2);//Defining 16 columns and 2 rows of lcd display
lcd.backlight();//To Power ON the back light
  int A_Rain = analogRead(A0);
  A_Rain = map(A_Rain, 800, 1023, 100, 0);

 
  if (A_Rain > 50) {
    lcd.print("Rain Detected ");
    lcd.setCursor(0,1); // set to the 2nd line of the lcd
    lcd.print(A_Rain); // print rain sensor value

   }
  else {
    lcd.print("No Rain Detected ");
    lcd.setCursor(0,1);
    lcd.print(A_Rain);

   }
}
