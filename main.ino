#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  

}


void loop()
{
  lcd.setCursor(1,0);
  lcd.print("Happy weekend!!!");
  lcd.blink();
  delay(2000);
  lcd.setCursor(1,1);
  lcd.print("Good bye!!");
  delay(2000);
  lcd.clear();
}