/*
 * Simple program to collect data from an MA3 Shaft Encoder with PWM
 * 
 * Values should be between 0 and 1023, 
 * but sometimes it returns greater than 1023
 */ 

int encoder_pin = 10; //Digital Pin
int encoder_value = 0;

void setup()
{
  pinMode(encoder_pin, INPUT);
  Serial.begin(57600);
}

void loop()
{
  encoder_value = pulseIn(encoder_pin, HIGH); //read the time between HIGH values
  Serial.print("encoder value: ");
  Serial.print(encoder_value);
  Serial.write(10); //ascii line feed
  delay(1000);
}

