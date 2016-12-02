int xpotPin = 0;  
int ypotPin = 1;  

int xval=0;   
int yval=0;

void setup()
{
  Serial.begin(9600);  //9600bit/s
}

void loop()
{
  xval = analogRead(xpotPin);   
  yval = analogRead(ypotPin);   
  Serial.print("X=");      
  Serial.print(xval);
  Serial.print(",");
  Serial.print("  Y=");     
  Serial.print(yval);
  Serial.println(",");
 
  delay(100);      
}
