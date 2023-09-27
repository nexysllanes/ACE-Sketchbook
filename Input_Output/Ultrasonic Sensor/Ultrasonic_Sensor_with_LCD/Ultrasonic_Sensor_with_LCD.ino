/* 
Aralinks Coding Education 
modified 27 April 2019
by Christian Dela Cruz
*/


#include <Ultrasonic.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>  // includes the LiquidCrystal Library

//I2C pins declaration
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); 

Ultrasonic ultrasonic(10,9); // (Trig PIN,Echo PIN)

void setup() {
lcd.begin(16,2);//Defining 16 columns and 2 rows of lcd display
}

void loop()
{
  
  lcd.setCursor(0, 0);
  lcd.print(ultrasonic.Ranging(CM)); // CM or INC
  lcd.print("cm");
  delay(10);
  lcd.setCursor(0,1);
  lcd.print(ultrasonic.Ranging(INC)); // CM or INC
  lcd.print("inches");
  delay(10);
}
