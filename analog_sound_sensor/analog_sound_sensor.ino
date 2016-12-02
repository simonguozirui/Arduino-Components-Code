void setup()
{

 
  Serial.begin(9600); // open serial port, set the baud rate to 9600 bps
}

void loop()
{
      int soundval;
      soundval=analogRead(14);   //connect mic sensor to Analog 0
      Serial.println(soundval,DEC);//print the sound value to serial        
      delay(100);
}
