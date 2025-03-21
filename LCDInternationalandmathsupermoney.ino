/*
Code by Dr. Harish with LCD shield on arduino for math and recreation which can be used in calculators on brick games. THis is like demo feature in keyboard pianos by casio or song in it.
*/
#include <EEPROM.h>
// include the library code:
#include <LiquidCrystal.h>
#include <math.h>

byte heart[8] = 

              {

                0b00000,

                0b01010,

                0b11111,

                0b11111,

                0b11111,

                0b01110,

                0b00100,

                0b00000

              };
byte rupee[8] = 

              {

                0b11111,

                0b11100,

                0b00010,

                0b00100,

                0b11111,

                0b00100,

                0b00010,

                0b00001

              };             


byte smile[8] = 

              {

                0b00000,

                0b00000,

                0b01010,

                0b00000,

                0b10001,

                0b01110,

                0b00000,

                0b00000

              };
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
  int ep=EEPROM.read(0);
  randomSeed(analogRead(A1)+ep);
  EEPROM.write(0,random(200));
  // Print a message to the LCD.
  
  lcd.createChar(1, heart);

  lcd.createChar(2, smile);

}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
  int a;
  int subtop119;
  int subtop192;
   a=int(random(6));
  if(a==0){
  lcd.print("Dr. Harish Fun $  ");}
  if(a==1){
    lcd.print("God is great $$   ");
  }

   if(a==2){
    lcd.print("Om Sri Sairam $ ");
  }

     if(a==3){
      subtop192=random(3);
      if(subtop192==0){
    lcd.write(1);lcd.write(' ');lcd.write(2);lcd.write(' ');lcd.write(1);lcd.write(' ');lcd.write(2);}
    if(subtop192==1){
      int ra=random(16);
      for(int cup1=0;cup1<ra;cup1++){
        lcd.write(1);
      }
    }
    if(subtop192==2){
      int ra=random(16);
      for(int cup1=0;cup1<ra;cup1++){
        lcd.write(2);
      }
    }
  }

  if(a==5){
    subtop119=int(random(8));
    if(subtop119==0){
    lcd.print("Vanakkam Nandri  ");}

    if(subtop119==1){
    lcd.print("Namaste ");}
    
    if(subtop119==2){
    lcd.print("Santhosha Aytu ");}

     if(subtop119==3){
    lcd.print("Guten Tag ");}

      if(subtop119==4){
    lcd.print("Ni hao");}
     if(subtop119==5){
    lcd.print("Bonjour");}

    if(subtop119==6){
    lcd.print("Em Kavali");}

    if(subtop119==7){
    lcd.print("Mrhabaan");}
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
