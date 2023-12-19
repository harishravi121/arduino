// THis code thinks and blinks just like a supercomputer in a university. The blinking is for fun and thinking is cool

float t=2.0;
float g=9.81;
float s=0.0;
long t2;
long n;
float e0=-13.6;
float e;
long A,B,r,n2;

long rand1;
long rand2;
long sum,product,divi,sub;
long V,I,R;
long C,H,O,Molwt;

long a,b;
float circ;
long rad;
float pi=3.141;

float spd=10.2;
float th=1.5;
float iq;
char c;
long select;

long rupee;
float Dol;
float Pound;
float Yuan;
long xd;
long ad;
void setup() {
  // put your setup code here, to run once:
pinMode(1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  randomSeed(analogRead(A1));
int sel;
int bd=int(random(20));
  
  int cd=int(random(10));
  for(int j=0;j<cd;j++){
  ad= random(10000);
  xd=random(ad/1.5);
  
  for(int i1=0;i1<bd;i1++){
  sel=int(random(2));
    if(sel==0) {
  digitalWrite(1, HIGH); }
  else if(sel==1){ digitalWrite(1,LOW);  }
    
  for(long i2=0;i2<(xd)/100;i2++){
    
 
  //Maths
    rand1=random(500);
  rand2=random(500);
  product=rand1*rand2;
  sum=rand1+rand2;
  divi=rand1/rand2;
  sub=rand1-rand2;

  //play
    a=random(10);
  b=random(10);
  while( a!=b)
    b=random(10);
  
       a=random(10);
  b=random(10);
  while( a!=b)
    b=random(10);
  

  //Physics
  
  t2=random(500);
  s=0.5*g*t2*t2;
  n=random(100);
  e=e0/n/n;
  //play
    a=random(10);
  b=random(10);
  while( a!=b)
    b=random(10);

        a=random(10);
  b=random(10);
  while( a!=b)
    b=random(10);
  }
 
  if(select==3){
  //Economics
  B=random(1000);
  r=random(20);
  n2=random(10);
  A=A0*pow((1+r/100.0),n2);

      a=random(10);
  b=random(10);
  while( a!=b)
    b=random(10);

        a=random(10);
  b=random(10);
  while( a!=b)
    b=random(10);

  
  



 
 
  
  }
                      // wait for a second
   sel=int(random(2));
    if(sel==0) {
  digitalWrite(1, HIGH); }
  else if(sel==1){ digitalWrite(1,LOW);  }   // turn the LED off by making the voltage LOW
    for(long i3=0;i3<(ad-xd)/100;i3++){
  


  //Electrical
  I=random(100);
  R=random(10000);
  V=I*I*R;

      a=random(10);
  b=random(10);
  while( a!=b)
    b=random(10);
  
  a=random(10);
  b=random(10);
  while( a!=b)
    b=random(10); 

  
  //Biochemical
  C=random(20);
  H=random(100);
  O=random(20);
  Molwt=12*C+H+16*O;

  //delay(60000);
  //Guessing game
  a=random(10);
  b=random(10);
  while( a!=b)
    b=random(10);
    a=random(10);
  b=random(10);
  while( a!=b)
    b=random(10);
    
  
  rad=random(1000);
  circ=2*pi*rad;

  iq=spd*pow(th,12);

  //char music[28]="CCDCFECCDCGFCCC'AGFBA#A#AFGF";
  //char Joke[43]="How do you call a skeleton? On the telebone";
  // wait for a second
  int a[5]={2,31,4,5,6};
 int temp;
for(int ab=0;ab<5;ab++){
    a[ab]=random(100);
  }
 for(int j=0;j<4;j++){
  for(int i=0;i<5-j-1;i++){
    if(a[i]>a[i+1]){
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
    }
  }
 }
 rupee=random(1000);
 Dol=rupee*0.013617;
 Pound=rupee*0.010032;
 Yuan=rupee*0.088975;



 
 }


  }

 

  }}
