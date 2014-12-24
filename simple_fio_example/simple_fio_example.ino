/*
 * A simple example program that will send text every second. 
 * I use this to make sure my Fio and XBee are working appropriately.
 * 
 * I hook another XBee up to my computer with an breakout board and 
 * use CoolTerm to display the messages.
 */

void setup() {
  Serial.begin(57600);	// opens port at 57600 bps
}

void loop() {
  Serial.print("Fio is working");
  Serial.write(10); //ascii line feed
  delay(1000);
}

