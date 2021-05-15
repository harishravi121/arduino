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
void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
digitalWrite(8,LOW); 
digitalWrite(10, HIGH); 
digitalWrite(8, HIGH); 
}

void loop() {
  int sel;
  // put your main code here, to run repeatedly:


    sel=int(random(2));
    if(sel==0) {
  digitalWrite(LED_BUILTIN, HIGH); }
  else if(sel==1){ digitalWrite(LED_BUILTIN,LOW);  }    // turn the LED on (HIGH is the voltage level)

  for(long i1=0;i1<random(500000);i1++){
      char c[13]="Om sri sairam";
      char d[20]="Om namo venkateshaya";
      char e[86]="Om bhur buvah suvaha tat savitur varenyam bhargo devasya deemahi diyoyonah prachodayat";
      char g[13]="Om sri sairam";
      char f[19]="May my enemies fail";
  }
                      // wait for a second
  sel=int(random(2));
    if(sel==0) {
  digitalWrite(LED_BUILTIN, HIGH); }
  else if(sel==1){ digitalWrite(LED_BUILTIN,LOW);  }    // turn the LED off by making the voltage LOW
    for(long i1=0;i1<random(1000);i1++){
  

 
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

  char chess[17]="e4e5BC4a6Qh5b6QF7";
  char cube1[10]="RURiURUURi";
  char cube2[18]="RiFRiBBRFiRiBBRRUi";
  char cube3[14]="FFULRiFFLiRUFF";
  char love[4]="Love";
  char cubesoln[147]="R B D' B D2 R2 U R' F' U2 F R U R' B' U2 B R' U' R U' F U' F' U2 L U' L' U2 F U F' R U B U' B' U B U' B' R' U' L' U L' U' F' L' F2 U' F' U F' L F L";
  char chesssoln[479]="1.d4 e5 2.dxe5 Nc6 3.Qd5 d6 4.e4 dxe5 5.Nc3 Be6 6.Qxd8+ Rxd8 7.Nb5 Rd7 8.Be3 Nb4 9.Na3 Nf6 10.Ne2 Nxe4 11.Bxa7 Nc6 12.Be3 Bb4+ 13.c3 Bxa3 14.bxa3 f5 15.f3 Nf6 16.Rb1 f4 17.Bxf4 exf4 18.Nxf4 Re7 19.Kf2 Na5 20.Bd3 Nd7 21.Rb5 b6 22.Nxe6 Rxe6 23.Rhb1 Nb7 24.Bc4 Re7 25.Rd5 Nd6 26.Bb3 Nc5 27.Rg1 Rf8 28.c4 Nde4+ 29.Kf1 Nc3 30.Rd2 Kf7 31.Kf2 Kg8 32.Rc2 N3e4+ 33.Kf1 Nd3 34.g3 Nec5 35.f4 Ne1 36.Re2 Rxe2 37.Kxe2 Re8+ 38.Kf1 Re4 39.Bd1 Kf7 40.Kf2 Ncd3+ 41.Kf1 Nc5 42.Kf2 Ncd3+ 43.Kf1 Nc5";
  char quote[63]="Success is 60% perspiration 30% computation and 10% inspiration";

  char music[28]="CCDCFECCDCGFCCC'AGFBA#A#AFGF";
  char Joke[43]="How do you call a skeleton? On the telebone";
  // wait for a second
  int a[5]={2,31,4,5,6};
 int temp;
 for(int j=3;j==0;j--){
  for(int i=0;i==j;i++){
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
