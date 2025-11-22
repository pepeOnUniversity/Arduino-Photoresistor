int pinAnalog = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valueAnalog = analogRead(pinAnalog);
  Serial.println(valueAnalog);
  delay(200);
}
