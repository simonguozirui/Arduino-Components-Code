void setup()
{
  

  Serial.begin(9600); // open serial port, set the baud rate to 9600 bps
}
void loop()
{
      int lightval;
      lightval=analogRead(10);   //connect mic sensor to Analog 0
      Serial.println(lightval,DEC);//print the sound value to serial        
      delay(100);
}
