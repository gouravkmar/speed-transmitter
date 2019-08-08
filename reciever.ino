#include <RCSwitch.h>
#include<stdlib.h>


RCSwitch mySwitch = RCSwitch();
void setup()

{ 
  
  Serial.begin(9600);
  mySwitch.enableReceive(0);  

pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(6,OUTPUT);
pinMode(10,OUTPUT);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(12,LOW);
digitalWrite(13,LOW);


  analogWrite(6,230);
  analogWrite(10,254);
  delay(100);
  analogWrite(10,239);
  analogWrite(6,250);
  delay(100);
  

}

int speed1=0,speed2=0,a,s1;

void stopch()
{
  a=400;
while(a>200)
{ s1++;
a=analogRead(A0);
}
if(s1>1)
  {
Serial.println(s1);
if(s1>110 && s1<150)
  speed1=0;


if(s1>150 && s1<200)
   speed2=0;

  }  
}

void loop()
{  
  speed1=0;speed2=0;
 
  //randomSeed(analogRead(A6));
  
 int i=random(60,90);
 int j=random(60,90);
 int k=random(60,90);

  speed1=2.7*i;
  speed2=3.0*j;*/
  stopch();
    
  analogWrite(6,speed1);
  analogWrite(10,speed2);
  delay(5*k-100);

  
  speed1=2.7*j;
  speed2=2.3*i;
  stopch();
    
  analogWrite(6,speed1);
  analogWrite(10,speed2);
  delay(4*i-100);

  
  speed1=2.7*i;
  speed2=2.9*j;
  stopch();
    
  analogWrite(6,speed1);
  analogWrite(10,speed2);
  delay(5*j-80);

  
  speed1=2.8*i;
  speed2=2.5*j;
  stopch();
    
  analogWrite(6,speed1);
  analogWrite(10,speed2);
  delay(7*k-100);



  speed1=2.5*i;
  speed2=2.7*j;
  stopch();
    
  analogWrite(6,speed1);
  analogWrite(10,speed2);
  delay(6*i-100);

  
  speed1=3.9*i;
  speed2=2.6*j;
  stopch();
    
  analogWrite(6,speed1);
  analogWrite(10,speed2);
  delay(4*k-60);


  speed1=2.8*i;
  speed2=3.2*j;
  stopch();
    
  analogWrite(6,speed1);
  analogWrite(10,speed2);
  delay(3*j-70);

  
  speed1=2.7*i;
  speed2=2.7*j;
  stopch();
    
  analogWrite(6,speed1);
  analogWrite(10,speed2);
  delay(5*k-100);
      
}