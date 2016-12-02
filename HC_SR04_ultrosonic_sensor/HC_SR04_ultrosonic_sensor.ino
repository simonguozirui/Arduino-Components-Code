const int TrigPin = 29; 
const int EchoPin = 28; 

void setup() 
{ 
Serial.begin(9600); 
pinMode(TrigPin, OUTPUT); 
pinMode(EchoPin, INPUT); 
} 
void loop() 
{ 
  float cm; 
digitalWrite(TrigPin, LOW); //低高低电平发一个短时间脉冲去TrigPin 
delayMicroseconds(2); 
digitalWrite(TrigPin, HIGH); 
delayMicroseconds(10); 
digitalWrite(TrigPin, LOW); 

cm = pulseIn(EchoPin, HIGH) / 58.0; //将回波时间换算成cm 
cm = (int(cm * 100.0)) / 100.0; // 
Serial.print(cm); 
Serial.print("cm"); 
Serial.println(); 
delay(50); 
} 

