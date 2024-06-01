# A pid control system to make refrigerators, ACs, ovens. We used it for preparing atomic physics samples in IISc. Shows response on screen in Labview if requried or directly works
# Harish and team in 2016

#include <PID_v1.h>
// initialize the library with the numbers of the interface pins from the above pin mappings


double Temp = 26.0;
int startflag=0;
int timesecs=0;
int stopflag=0;
char Output2=0;
int Tmax=4000; //secs
int timehrs=0//hrs
int timeday=0;

int cell=0; 


double Setpoint=70.0;
//pid initializations


double Input, Output;

//Specify the links and initial tuning parameters
double gain = .25;
double Kp=5.95*gain;
double Ki=.024*gain;
double Kd=35*gain;
PID myPID(&Temp, &Output, &Setpoint, Kp, Ki, Kd, DIRECT);

double Temprobust(int samples){
  unsigned int val=0;
  double Temp1=0;
  for(int m=0;m<samples;m++){
  val += analogRead(2); // read the Temp value multiple times
  for(unsigned int k2=0;k2<32000;k2++); //delay
  }
  
  Temp1=round(val*3300.0/1024/samples)/10.0;
  return Temp1;
}


void setup() {
  // set up the LCD's number of characters per line and lines: 

  Serial1.begin(9600);
  Serial.begin(9600);
  Serial1.print(30);
  //analogReference(INTERNAL);  // Use the 1.1 V internal ref
 //lcd.print("Temperature ");
  TCCR1A=0;
  TCCR1B=0;
  TCNT1=0;
  TIMSK1 |=(1<<TOIE1); // Enables timer overflow
  if(cell==1) 
  Setpoint=38.9;


  Temp=Temprobust(100);
  

  myPID.SetSampleTime(2096); //Sampletime
  //turn the PID on
  myPID.SetMode(AUTOMATIC);
  TCCR1B|=(1<<CS12);
}


ISR(TIMER1_OVF_vect)
{

  Temp=Temprobust(100);

  if(stopflag==0){
  myPID.Compute();
  Output2=(char)round(Output);
  }

  if(stopflag==1)
  {
    Output=0;
    Output2=(char)Output;
  }
  Serial1.print(Output2);  // Output to the dimmer  
  Serial.print(Temp);  //print temperature over USB
  Serial.print("  ");
  Serial.print(round(Output));
  Serial.println(" ");

  if(Temp>Setpoint)
  {startflag=1;}

  if(startflag==1)
  {timesecs+=2;}

  if(timesecs==7200){
    timehrs+=2;
    timesecs=0;
  }

  if(timehrs==24){
    timeday+=1;
    timehrs=0;
  }

  if(cell==1){
  if(timesecs>Tmax)
  {stopflag=1;}}

  if(cell==0){//Hatching
  if(timeday==21)
  stopflag=1;
  }

}

void loop() {
  for(unsigned int k=0;k<33254;k++);

}

