/*
 * Simple program to collect data from an MA3 Shaft Encoder with PWM
 *
 * Values should be between 0 and 1023,
 * but sometimes mine returns greater than 1023
 */

int encoder_pin = 10; // digital pin 10
int encoder_value = 0;

void setup()
{
  pinMode(encoder_pin, INPUT);
  Serial.begin(57600); // baud rate of XBee
}

void loop()
{
  // read the time between HIGH values
  encoder_value = pulseIn(encoder_pin, HIGH);

  // send the data to XBee
  Serial.print("encoder value: ");
  Serial.print(encoder_value);
  Serial.write(10); //ascii line feed

  // wait 1 second, then loop again.
  delay(1000);
}
