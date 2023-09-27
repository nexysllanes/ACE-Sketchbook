/* 
Aralinks Coding Education 
modified 27 April 2019
by Gerald Llavore
*/

// include the library code:
#include <Wire.h>
#include <LiquidCrystal_I2C.h>



// initialize the library with the numbers of the interface pins
LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup() {
  pinMode(A0, INPUT);       //PINMODE 
  
}
void loop() {
  
  lcd.begin(); //start 16x2 lcd screen
  lcd.setBacklight((uint8_t)1); // set the backlight for the lcd
  int soil = analogRead(A0);


 
  if (soil < 1000) {
    lcd.print("WET");
    lcd.setCursor(0,1); // set to the 2nd line of the lcd
    lcd.print(soil); // print soil value

   }
  else {
    lcd.print("DRY");
    lcd.setCursor(0,1);
    lcd.print(soil);

   }
}
