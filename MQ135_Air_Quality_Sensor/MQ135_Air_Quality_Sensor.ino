int airqualityval;

void setup()
{
  Serial.begin(9600);      // sets the serial port to 9600
}

void loop()
{
   airqualityval = analogRead(A0);       // read analog input pin 0
  Serial.println( airqualityval, DEC);  // prints the value read
  delay(100);                        // wait 100ms for next reading
}
