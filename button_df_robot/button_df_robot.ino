/*
  # Description:
  # When you push the digital button, the Led 13 on the board will turn on. Otherwise,the led turns off.
*/
int ledPin = 13;                // choose the pin for the LED
int inputPin = 32;               // Connect sensor to input pin 3 


void setup() {
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare pushbutton as input
  Serial.begin(9600);
}

void loop(){
  int val = digitalRead(inputPin);  // read input value
  if (val == HIGH) {   // check if the input is HIGH
    Serial.println("pressed");
    digitalWrite(ledPin, LOW);  // turn LED OFF
  } else {
    digitalWrite(ledPin, HIGH); // turn LED ON
  }
  delay(100);
}
