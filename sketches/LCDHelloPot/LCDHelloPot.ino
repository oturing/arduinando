/*
  LCDHelloPot
  LiquidCrystal Library - Hello World with time and analog pot
 
  Tutorial:
  http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
//________________RS__E___D4_D5_D6_D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Hello, world!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis()/1000);
  lcd.setCursor(10, 1);
  lcd.print(5.0*analogRead(A0)/1023);
  lcd.setCursor(15, 1);
  lcd.print("V");
}

