#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup()
{
  Serial.begin(9600);
mySwitch.enableTransmit(10);
}

int  t1=0, t2=0; 

void loop() 
{
 int a,b,s1;
 int c,d,s2;
 unsigned long timeout;


 a=0,b=0,s1=0;
 timeout=millis();
 while(a<100)
   {
  a=analogRead(A0);
 // Serial.println(millis()-timeout);
  if(millis()-timeout>1000)
  {break;}
   }
 
a=1;b=1;

timeout=millis();
while(b>=a)
{ 
  b=a;
  s1=s1+1; 
  a=analogRead(A0);
if(a<200)
   { a=0;}
else 
  {a=1;}
if(millis()-timeout>1000)
{ s1=100;
t1=0;
  break;}
}

 if(s1>1666)
 {

t1=100000/s1;
 }
Serial.print(t1);
Serial.print(" ");
 

mySwitch.send(1111, 24);
mySwitch.send(t1, 24);
delay(10);

 c=0,d=0,s2=0;
timeout=millis();
 while(c<100)
 { 
  c=analogRead(A1);
 
 if(millis()-timeout>1000)
 {break;}
 }


c=1;d=1;

 timeout=millis();
while(d>=c)
{ 
  d=c;
s2=s2+1;
c=analogRead(A1);

if(c<200)
    { c=0;}
else 
  {c=1;}
if(millis()-timeout>1000)
{  s2=100;
  t2=0; 
  break;
}} 

 if(s2>1666)
 {
  
   t2=100000/s2;
 }
 Serial.print(t2);
 Serial.println();

 
mySwitch.send(2222, 24);
mySwitch.send(t2, 24);
 delay(10);
 timeout=0;
 
}
