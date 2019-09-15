int LDRValue = 0;
const int LDRpin=A0;
const int ledPin=A5;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LDRpin,INPUT);
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
LDRValue = analogRead(LDRpin);
Serial.println(LDRValue/4);
analogWrite(ledPin,LDRValue/4);
delay(1000);
}
