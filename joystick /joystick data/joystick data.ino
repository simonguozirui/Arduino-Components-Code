//#reading data from joystick
//#摇杆数据反馈

int xpotPin = 0;  //set the port for x input设置模拟口0为X的信号输入端口
int ypotPin = 1;  //set the port for y input设置模拟口1为Y的信号输入端口 

int xval=0;    //set variable x,y value
int yval=0;    //设置x,y轴变量

void setup()
{
  Serial.begin(9600);  //set 9600bit/s 设比特率
}

void loop()
{
  xval = analogRead(xpotPin);   //xval equals to the x value from port 2变量为从0信号口读取到的数值
  yval = analogRead(ypotPin);   //xval equals to the x value from port 1变量为从1信号口读取到的数值
   
  Serial.print("X=");      //write x= 使屏幕显示文字X=
  Serial.print(xval);
  Serial.print(",");
  Serial.print("  Y=");    //write y= 使屏幕显示文字Y=
  Serial.print(yval);
  Serial.println(",");
  if (xval > 1000)
{
  Serial.print("forward   ");
}
else if(xval<100)
{
  Serial.print("backrward   ");
}
else if(yval>1000)
{
  Serial.print("right   ");
}
else if(yval<100)
{
  Serial.print("left   ");
}
else
{
  Serial.print("stay   ");
}
 
  delay(100);   //refresh every 100 ms 100ms刷新一次       
}
