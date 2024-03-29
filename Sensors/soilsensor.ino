const int sensor_pin = A1;  /* Soil moisture sensor O/P pin */

void setup() {
  Serial.begin(9600); /* Define baud rate for serial communication */
}

void loop() {
  float moisture_percentage;
  int sensor_analog;
  sensor_analog = analogRead(sensor_pin);
  //Serial.print(sensor_analog);

                          
  moisture_percentage = ( 100 - ( (sensor_analog/1023.00) * 100 ) );
  Serial.print("Moisture Percentage = ");
  Serial.print(moisture_percentage);
  Serial.print("%\n\n");
  delay(200);
}
