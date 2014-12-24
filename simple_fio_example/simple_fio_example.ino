void setup() {
  Serial.begin(57600);	// opens port at 57600 bps
}

void loop() {
  Serial.print("Fio is working");
  Serial.write(10); //ascii line feed
  delay(1000);
}

