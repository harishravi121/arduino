/*
Code by Dr. Harish with LCD shield on arduino for math and recreation which can be used in calculators on brick games.
*/
#include <EEPROM.h>
// include the library code:
#include <LiquidCrystal.h>
#include <math.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  int ep=EEPROM.read(0);
  randomSeed(analogRead(A1)+ep);
  EEPROM.write(0,random(200));
  // Print a message to the LCD.
  

}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
  int a;
   a=int(random(10));
   lcd.print("Guess 1-10");
   lcd.setCursor(0, 1);
    lcd.print("All the best");
  delay(3600+random(4000));
  lcd.clear();
   lcd.setCursor(0, 0);
   lcd.print("Answer and 36x if won");
    lcd.setCursor(0, 1);
    lcd.print(a);
  delay(3600+random(4000));
  lcd.clear();
}
