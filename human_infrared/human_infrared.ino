const int MotionPin = 6;     
int motionval;
int motion = 0;  
 void setup() {
   Serial.begin(9600);
   
   pinMode(MotionPin, INPUT);     
 }
 void loop()
 {
   /*( if (digitalRead(MotionPin) == HIGH) 
    {     

      Serial.println("Detected");
    } 
    else {
      
      Serial.println("Undetected");
      
    }
    delay(100);*/
    motionval = analogRead(MotionPin);
    if (motionval < 10){
      motion = 0;
    }else{
      motion = 1;
    }
    Serial.println(motion);
 }
