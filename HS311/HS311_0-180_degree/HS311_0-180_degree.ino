
#include <Servo.h> 
Servo hexabaseservo;  // create servo object to control a servo 
int angle = 0;

void setup()
{
  hexabaseservo.writeMicroseconds(1500); //set initial servo position if desired
  hexabaseservo.attach(15);  //the pin for the servo control 
}

void loop() 
{ 
  for (angle = 0; angle < 180; angle +=1)
  {
    hexabaseservo.write(angle);
    delay(8); 
  }
  angle = 180;
  hexabaseservo.write(angle);
  delay(1000);
  for (angle = 180; angle > 0; angle -=1)
  {
    hexabaseservo.write(angle);
    delay(8); 
  }
   angle = 0;
  hexabaseservo.write(angle);
  delay(1000);

}
