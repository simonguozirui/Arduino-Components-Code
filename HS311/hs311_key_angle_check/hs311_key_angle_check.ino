
#include <Servo.h> 
Servo hexabaseservo;  // create servo object to control a servo 
int angle = 0;

void setup()
{
  hexabaseservo.writeMicroseconds(1500); //set initial servo position if desired
  hexabaseservo.attach(7);  //the pin for the servo control 
}

void loop() 
{ 
  angle = 0;
  hexabaseservo.write(angle);
  delay(1000);
  
  angle = 90;
  hexabaseservo.write(angle);
  delay(1000);

  angle = 180;
  hexabaseservo.write(angle);
  delay(1000);

  angle = 90;
  hexabaseservo.write(angle);
  delay(1000);


}
