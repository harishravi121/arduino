/*
Code by Dr. Harish with LCD shield on arduino for math and recreation which can be used in calculators on brick games.
*/

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
  float e;
   a=int(random(5));
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

  if(a==2){//select product
  b=int(random(620));
  c=int(random(140));
  d=b-c;
 
      lcd.print(b);
    lcd.print(" - ");
    lcd.print(c);
    
      lcd.print(" = ");
      lcd.print(d);
      lcd.print("    ");
    }

  if(a==3){//select sum
  b=int(random(10));
  c=int(random(5));
  d=pow(b,c);
 
      lcd.print(b);
    lcd.print(" ^ ");
    lcd.print(c);
    
      lcd.print(" = ");
      lcd.print(d);
      lcd.print("    ");
    }

  if(a==4){//select sum
  float f=float(random(100)+1.0);
  float g=float(random(20)+1.0);
  e=round(f/g*100.0)/100.0;
 
      lcd.print(int(f));
    lcd.print(" / ");
    lcd.print(int(g));
    
      lcd.print(" = ");
      lcd.print(e);
      lcd.print("    ");
    }
  delay(3000+random(3000));
  
}