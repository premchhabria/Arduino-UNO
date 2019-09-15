
const int ledPin = 13;
const int ldrPin = A0;
const int IRPin = 8;

void setup() {
 Serial.begin(9600);
 pinMode(ledPin, OUTPUT);
 pinMode(ldrPin, INPUT);
 pinMode(IRPin, INPUT);// set pin as input
}

void loop() {
  //Written for Robojax on Dec 28, 2017
  int detect = digitalRead(8);// read obstacle status and store it into "detect"
  int ldrStatus = analogRead(ldrPin);
  
  if(detect == LOW)
  { //Checking if there is an obstacle
    if (ldrStatus >=300) //Checking if there is an absence of light
    {
      digitalWrite(ledPin, HIGH);
      Serial.println("LDR is DARK, LED is ON");
      
    }
    else 
    {
      digitalWrite(ledPin, LOW);
      Serial.println("-----------------");
    }
    Serial.println("Obastacle on the way");
  }
  else
  {
    digitalWrite(ledPin, LOW);
    Serial.println("All clear");  
  }
  delay(300);
}
