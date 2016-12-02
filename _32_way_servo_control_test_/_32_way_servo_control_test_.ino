
void setup() {
Serial.begin(9600);    // 设置波特率为9600

}

void loop() 
{ 
Serial.println("#1 P1500T1000\r\n");  
delay(1000); 
Serial.println("#1P500T1000\r\n");  
delay(1000);  // 延时1000ms，舵机刚好执行完上一条命令

}
