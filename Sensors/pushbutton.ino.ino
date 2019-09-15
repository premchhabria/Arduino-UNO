const int buttonPin=2;
//const int ledPin=13;
int buttonState=0;
int LED=6;

void setup() {
  // put your setup code here, to run once:
  //pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState=digitalRead(buttonPin);

  if(buttonState==HIGH)
  {
    //digitalWrite(ledPin,HIGH);
    digitalWrite(LED,HIGH);
  }

  else
  {
    //digitalWrite(ledPin,LOW);
    digitalWrite(LED,LOW);
    
    }
  }
