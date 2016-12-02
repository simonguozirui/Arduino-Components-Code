#include <SoftwareSerial.h>
const int Eye_left = 2;
const int Eye_right = 6;
const int TouchPin_1=3;
const int TouchPin_2=4;
const int TouchPin_3=5;
const int TouchPin_4=7;
const int TouchPin_5=8;
int sum_input;
//set up bluetooth
SoftwareSerial BT(10, 11); 

void setup() { 
  Serial.begin(9600);
  BT.begin(9600);
  pinMode(Eye_left, OUTPUT);
  pinMode(Eye_right, OUTPUT);
  pinMode(TouchPin_1, INPUT);
  pinMode(TouchPin_2, INPUT);
  pinMode(TouchPin_3, INPUT);
  pinMode(TouchPin_4, INPUT);
  pinMode(TouchPin_5, INPUT);

  // Now, activate the BLE peripheral
  
}




void loop() {
  BT.println(analogRead(1));
  
  
   
  delay(500);
}
