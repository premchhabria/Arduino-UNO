#include<dht.h>
dht DHT;
#define DHT11_PIN 2


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int chk =DHT.read11(DHT11_PIN);
Serial.print("Humidity = ");
Serial.print(DHT.humidity);
Serial.print("g/m^3");
Serial.print("  \tTemperature= ");
Serial.print(DHT.temperature,1);
Serial.println(" degrees");
delay(2000);
}
