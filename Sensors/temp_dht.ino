#define dht_apin 7
#include<dht.h>
dht DHT;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
delay(500);
Serial.println("DHT11 humanity and temp sensor\n\n");
delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:
DHT.read11(dht_apin);
Serial.println("current humidity = ");
Serial.print(DHT.humidity);
Serial.println("%");
Serial.print("temperature= ");
Serial.print(DHT.temperature);
Serial.println("C");
delay(5000);

}
