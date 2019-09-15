#include <Adafruit_PCD8544.h>

#include <Adafruit_LiquidCrystal.h>

#include <Adafruit_PCD8544.h>

#include <dht.h>

#include <LiquidCrystal.h>

#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#include <dht.h>
#define DHTPIN 7     //digital pin sensor

// Uncomment whatever type you're using!

  #define DHTTYPE DHT11      // DHT 11
  //#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
  //#define DHTTYPE DHT21

LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

const int ledPin = 6;

DHT dht(DHTPIN, DHTTYPE);

void setup() 
  {
    lcd.setBacklightPin(3,Positive);
    lcd.setBacklight(3,Positive);
    lcd.begin(16, 2);
    lcd.clear();
    dht.begin();
  }

void loop() 
{
  int chk = DHT.read11(DHT);
  delay(1000);
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
   lcd.print("NO CONNECTION");
    return;
  }

 
    lcd.setCursor(0, 0);
    lcd.print(h);
    lcd.print(" % ");
    lcd.print(t);
    lcd.print(" C");
