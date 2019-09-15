const int buzzer = 9; //buzzer to arduino pin 9
void setup() {
  // put your setup code here, to run once:
pinMode(buzzer,OUTPUT); //set buzzer-pin 9 as an output
}

void loop() {
  // put your main code here, to run repeatedly:
tone(buzzer,1000); //send 1kHz sound signal..
delay(1000); //...for 1 sec
noTone(buzzer); //stop sound..
delay(1000);  //...for 1 sec
}
