/*
 * Nathan Drzadinski
 * 
 */


#include "Tlc5940.h"
 

#define FET1Pin 4
#define FET2Pin 5
#define FET3Pin 8
#define FET4Pin 12

#define RPin 6

void setup()
{
  pinMode(FET1Pin, OUTPUT);
  pinMode(FET2Pin, OUTPUT);
  pinMode(FET3Pin, OUTPUT);
  pinMode(FET4Pin, OUTPUT);
  Tlc.init(0); // initialise TLC5940 and set all channels off
  pinMode(RPin, OUTPUT);
  
}

void loop()
{
  /*
  for (int i = 1; i < 48; i++)
  {
    for(int j = 0; j<4; j++){
      if(j==0){
        digitalWrite(FET1Pin, HIGH);
        digitalWrite(FET2Pin, LOW);
        digitalWrite(FET3Pin, LOW);
        digitalWrite(FET4Pin, LOW);
        Tlc.set(i, 4046);
        Tlc.set(i-1,0);
        Tlc.update();
        delay(1000);
      }
      else if (j==1){
        digitalWrite(FET1Pin, LOW);
        digitalWrite(FET2Pin, HIGH);
        digitalWrite(FET3Pin, LOW);
        digitalWrite(FET4Pin, LOW);
        Tlc.set(i, 4046);
        Tlc.set(i-1,0);
        Tlc.update();
        delay(1000);
      }
      else if(j==2){
        digitalWrite(FET1Pin, LOW);
        digitalWrite(FET2Pin, LOW);
        digitalWrite(FET3Pin, HIGH);
        digitalWrite(FET4Pin, LOW);
        
        Tlc.set(i, 4046);
        Tlc.set(i-1,0);
        Tlc.update();
        delay(1000);
      }
      else{
        digitalWrite(FET1Pin, LOW);
        digitalWrite(FET2Pin, LOW);
        digitalWrite(FET3Pin, LOW);
        digitalWrite(FET4Pin, HIGH);
        Tlc.set(i, 4046);
        Tlc.set(i-1,0);
        Tlc.update();
        delay(1000);
        Tlc.set(i, 0);
        Tlc.update();
      }
      
    }
  }
  */
  //digitalWrite(RPin, HIGH);
  for (int i = 0; i < 48; i++)
  {
    Tlc.set(i, 2046);
  }
  Tlc.update();
  delay(1000);
  for (int i = 0; i < 48; i++)
  {
    Tlc.set(i, 3069);
  }
  Tlc.update();
  delay(1000);
  for (int i = 0; i < 48; i++)
  {
    Tlc.set(i, 4095);
  }
  Tlc.update();
  delay(1000);
  /*
  Tlc.set(0, 4095);
  Tlc.update();
  delay(1000);
  Tlc.set(0,0);
  Tlc.set(1,4095);
  Tlc.update();
  delay(1000);
  Tlc.set(1,0);
  Tlc.set(15, 4095);
  Tlc.update();
  delay(1000);*/
}
