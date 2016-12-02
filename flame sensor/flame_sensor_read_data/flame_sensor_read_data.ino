
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A9);
  Serial.println(sensorValue);
}
