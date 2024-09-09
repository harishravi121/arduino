/*
Code by Dr. Harish with LCD shield to display random sentances and revise math!
Can be used in schools and homes! Costs 1000 re to make and can be sold @ 1250 with profit or hobbyists can make it..
Can add school or home name in sentances which come up..
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
  randomSeed(analogRead(0));
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
  
  
  int b;
  int c;
  int d;
   a=int(random(2));
  if(a==0){//select sum
  b=int(random(620));
  c=int(random(120));
  d=b+c;
 
      lcd.print(b);
    lcd.print(" + ");
    lcd.print(c);
    
      lcd.print(" = ");
      lcd.print(d);
      lcd.print("    ");
    }
  if(a==1){//select product
  b=int(random(40));
  c=int(random(40));
  d=b*c;
 
      lcd.print(b);
    lcd.print(" * ");
    lcd.print(c);
    
      lcd.print(" = ");
      lcd.print(d);
      lcd.print("    ");
    }
  delay(3000+random(3000));
  
}
