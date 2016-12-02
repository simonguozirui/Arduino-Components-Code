int button1Pin = 9;   
int button2Pin = 11;   
int button3Pin = 12;   
int button4Pin = 10;    
int buttonleftPin = 6;   
int buttondownPin = 7;   
int buttonupPin = 5;   
int buttonrightPin = 8;    
int LZ1Pin = 15;        
int LZ2Pin = 16;           
int RZ1Pin = 13;   
int RZ2Pin = 14;   
int virbrationMotorPin = 2;
int xLjoystickPin = 4; 
int yLjoystickPin = 5;  
int xLjoystickval=0;   
int yLjoystickval=0;    
int xRjoystickPin = 2; 
int yRjoystickPin = 3; 
int xRjoystickval=0;   
int yRjoystickval=0;   
int RXLEDPin = 17;
int LjoybuttonPin = 1;
int RjoybuttonPin = 0;


void setup() 
{
  pinMode(button1Pin, INPUT);     
  pinMode(button2Pin, INPUT);
  pinMode(button3Pin, INPUT);
  pinMode(button4Pin, INPUT);
  pinMode(buttonupPin, INPUT);
  pinMode(buttondownPin, INPUT);
  pinMode(buttonleftPin, INPUT);
  pinMode(buttonrightPin, INPUT);
  pinMode(LZ1Pin, INPUT);
  pinMode(LZ2Pin, INPUT);
  pinMode(RZ1Pin, INPUT);
  pinMode(RZ2Pin, INPUT);
  pinMode(virbrationMotorPin,OUTPUT);
  pinMode(RXLEDPin,OUTPUT);
  pinMode(LjoybuttonPin, INPUT);
  pinMode(RjoybuttonPin, INPUT);
  Serial.begin(9600);  
}

void loop(){

  int button1val = digitalRead(button1Pin);  
  int button2val = digitalRead(button2Pin); 
  int button3val = digitalRead(button3Pin); 
  int button4val = digitalRead(button4Pin); 
  int buttonupval = digitalRead(buttonupPin);
  int buttondownval = digitalRead(buttondownPin);
  int buttonleftval = digitalRead(buttonleftPin);
  int buttonrightval = digitalRead(buttonrightPin);
  int LZ1val = digitalRead(LZ1Pin);
  int LZ2val = digitalRead(LZ2Pin);
  int RZ1val = digitalRead(RZ1Pin);
  int RZ2val = digitalRead(RZ2Pin);
  int Ljoybuttonval = analogRead(LjoybuttonPin);
  int Rjoybuttonval = analogRead(RjoybuttonPin);
  
  
  
  if (button1val == LOW) {           
    Serial.println("ONE");
  } 
  if (button2val == LOW) 
  {
  Serial.println("TWO");
  }
  if (button3val == LOW) 
  {
  Serial.println("THREE");
  }
  if (button4val == LOW) 
  {
  Serial.println("FOUR");
  }
  if (buttonupval == LOW) 
  {
  Serial.println("UP");
  }
  if (buttondownval == LOW) 
  {
  Serial.println("DOWN");
  }
  if (buttonleftval == LOW) 
  {
  Serial.println("LEFT");
  }
  if (buttonrightval == LOW)
  {
  Serial.println("RIGHT");
  }
  if (LZ1val == LOW) 
  {           
  Serial.println("LT1");
  } 
  if (LZ2val == LOW) 
  {           
  Serial.println("LT2");
  //digitalWrite(virbrationMotorPin,LOW);
  } 
  if (RZ1val == LOW) 
  {           
  Serial.println("RT1");
  } 
  if (RZ2val == LOW) 
  {           
  Serial.println("RT2");
   //digitalWrite(virbrationMotorPin,HIGH); 
  } 

  xLjoystickval = analogRead(xLjoystickPin);   
  yLjoystickval = analogRead(yLjoystickPin);   
  xRjoystickval = analogRead(xRjoystickPin);   
  yRjoystickval = analogRead(yRjoystickPin);
  if (xLjoystickval > 1000)
{
  Serial.println("Lforward   ");
}
if(xLjoystickval<100)
{
  Serial.println("Lbackrward   ");
}
if(yLjoystickval>1000)
{
  Serial.println("Lleft   ");
}
if(yLjoystickval<100)
{
  Serial.println("Lright   ");
}

if (xRjoystickval > 1000)
{
  Serial.println("Rforward   ");
}
if(xRjoystickval<100)
{
  Serial.println("Rbackrward   ");
}
if(yRjoystickval>1000)
{
  Serial.println("Rleft   ");
}
if(yRjoystickval<100)
{
  Serial.println("Rright   ");
}
if (Ljoybuttonval == 0) 
{           
  Serial.println("LJB = 1");
  digitalWrite(RXLEDPin,HIGH);
  delay(100);
} 
if (Rjoybuttonval == 0) 
{           
  Serial.println("RJB = 1");
  digitalWrite(RXLEDPin,LOW);
  delay(100);
} 
 delay(100);
  
}



