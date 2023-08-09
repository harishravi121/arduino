/*
Atomic clock can be connected to this
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int timemin=0;
  int timehour=0;
  int timedays=0;
  // print out the value you read:
  Serial.println(timemin);
  Serial.println(timehour);
  Serial.println(timedays);
  delay(60000); 
  timemin+=1;
  if(timemin>=60){
    timehour+=1;
    timemin=0;
    if(timehour>=24){
      timehour=0;
      timedays+=1;
       if(timedays>=365){
      timedays=0;
      
    }
    }
  }
    
  
}
