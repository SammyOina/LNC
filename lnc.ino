
void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(115200);
  Serial3.begin(115200);
}

void loop() { // run over and over
  Serial3.write(5);
  Serial3.flush();
  delay(1000);
  Serial3.write(9);
  Serial3.flush();
  delay(1000);
  Serial3.write(11);
  Serial3.flush();
  delay(3000);
  Serial3.write(4);
  Serial3.flush();
  delay(1000);
  Serial3.write(8);
  Serial3.flush();
  delay(1000);
  Serial3.write(10);
  Serial3.flush();
  delay(2000);
}
