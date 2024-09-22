/*
Code by Dr. Harish with LCD shield on arduino for math and recreation which can be used in calculators on brick games. Can add forex also!
*/
#include <EEPROM.h>
// include the library code:
#include <LiquidCrystal.h>
#include <math.h>
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
char text[]="Jai sairam, Hare Krishna, Om shivaya";
char texttemp[50];
char text2[]="Success 90%perspiration &10%inspiration";
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2); 
  
  

}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
  int a;
   a=int(random(5));
  if(a==0){
  lcd.print("Dr. Harish  Fun   ");}
  if(a==1){
    lcd.print("God is great    ");
  }

   if(a==2){
    lcd.print("Om Sri Sairam   ");
  }

     if(a==3){
    lcd.print("Sai Krushna CT  ");
  }

  if(a==4){

    int year=random(3500)-1000;
    if(year<0){
      year=year*-10;
      lcd.print(year);
      lcd.print(" BC     ");
    }

    else{
      
      lcd.print(round(year*1.2));
      lcd.print(" AD      ");
    }
  
  }
  lcd.setCursor(0, 1);
  
  
  int b;
  int c;
  int d;
  float e;
  float f;
  float g;
  int h;
   a=random(8);
  if(a==0){//select sum
  b=int(random(620));
  c=int(random(120));
  d=b+c;
 
      lcd.print(b);
    lcd.print(" + ");
    lcd.print(c);
    
      lcd.print(" = ");

      delay(5000+random(2500));
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
      delay(5000+random(2500));
      lcd.print(d);
      lcd.print("        ");
    }

  if(a==2){//select product
  b=int(random(620));
  c=int(random(140));
  d=b-c;
 
      lcd.print(b);
    lcd.print(" - ");
    lcd.print(c);
    
      lcd.print(" = ");
      delay(5000+random(2500));
      lcd.print(d);
    
      lcd.print("    ");
    }

  if(a==3){//select sum
  f=float(random(10)+1);
  g=float(random(5));
  e=pow(f,g);
 
      lcd.print(round(f));
    lcd.print(" ^ ");
    lcd.print(round(g));
    
      lcd.print(" = ");
      delay(5000+random(2500));
      lcd.print(round(e));
      lcd.print("      ");
    }

  if(a==4){//select sum
  f=float(random(100)+1.0);
  g=float(random(20)+1.0);
  e=round(f/g*100.0)/100.0;
 
      lcd.print(int(f));
    lcd.print(" / ");
    lcd.print(int(g));
    
      lcd.print(" = ");
      delay(5000+random(2500));
      lcd.print(e);
      lcd.print("    ");
    }

  if(a==5){//select product
  b=int(random(40));
  c=int(random(40));
  h=int(random(20));
  d=b+c-h;
 
      lcd.print(b);
    lcd.print("+");
    lcd.print(c);
      lcd.print("-");
    lcd.print(h);
    
      lcd.print("=");
      delay(5000+random(2500));
      lcd.print(d);
      lcd.print("      ");
    }
  if(a==6){//select product
  b=int(random(40));
  c=int(random(40));
  h=int(random(20));
  d=b*c+h;
 
      lcd.print(b);
    lcd.print("*");
    lcd.print(c);
      lcd.print("+");
    lcd.print(h);
    
      lcd.print("=");
      delay(5000+random(2500));
      lcd.print(d);
      lcd.print("      ");
    }
  if(a==7){//select product
    int subind=random(7);
    if(subind==0)
      lcd.print("Loveall serveall      ");
    if(subind==1)
      lcd.print("Help ever       ");
    if(subind==2)
      lcd.print("Hurt never      ");
    if(subind==3)
      lcd.print("Excercise daily      ");
    
    if(subind==4)
      lcd.print("F=ma, v=u+at      ");
    if(subind==5)
      lcd.print("2H2 + O2 -> 2H2O      ");
    if(subind==6){
      unsigned int i=0;
      int subsubsubind=random(2);
      if(subsubsubind==0){
        while(text[i]!='\0'){
   lcd.print(text[i]);
   
 	if(i>=14)
	{
          lcd.scrollDisplayLeft(); //Scrolling text to Right
        }
   delay(250);
   i++;
   }
      }
      if(subsubsubind==1){
        while(text2[i]!='\0'){
   lcd.print(text2[i]);
   
 	if(i>=14)
	{
          lcd.scrollDisplayLeft(); //Scrolling text to Right
        }
   delay(250);
   i++;
   }
      }

    }
  }
    
  delay(3600+random(4000));
  lcd.clear();
}
