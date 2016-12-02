#include <Servo.h>

Servo myservo; 

int pos = 90;   

void setup()
{
  myservo.attach(20);  
}

void loop()
{
  myservo.write(pos);
}


