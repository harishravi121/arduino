/*
Code by Dr. Harish with LCD shield 
*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Dr. Harish is Fun");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
  int a;
   a=int(random(3));
  if(a==0){
  lcd.print("Dr. Harish  Fun   ");}
  if(a==1){
    lcd.print("God is great    ");
  }

   if(a==2){
    lcd.print("Om Sri Sairam   ");
  }
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(1000+random(1000));
  delay(1000+random(1000));
  
}
