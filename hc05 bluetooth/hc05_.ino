void setup()
{
   
  Serial.begin(38400);
  pinMode(12, OUTPUT);
}

void loop()
{
  while(Serial.available())
   {
     char c=Serial.read();
      if(c=='1')
        {
//          Serial.println("Hello");
          Serial.write("Serial--12--high");//返回到手机调试程序上
          digitalWrite(12, HIGH);
        }
       if(c=='2')
       {
        Serial.write("Serial--12--low");
        digitalWrite(12, LOW);
       }
   }
}
