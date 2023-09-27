/* 
Aralinks Coding Education 
modified 24 April 2019
by Nikko Llanes

Library Download: https://bitbucket.org/fmalpartida/new-liquidcrystal/downloads 

*/

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


//I2C pins declaration
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); 

void setup() 
{
  Serial.begin(9600);
lcd.begin(16,2);//Defining 16 columns and 2 rows of lcd display
lcd.backlight();//To Power ON the back light
//lcd.noBacklight();// To Power OFF the back light

}
void loop() 
{
//Write your code


lcd.setCursor(0,0); //Defining positon to write from first row,first column .
lcd.print("Hello World!"); //You can write 16 Characters per line .

 delay(1000);
}
