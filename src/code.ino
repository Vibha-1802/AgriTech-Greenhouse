#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

const int moisturePin = A0;
const int waterPumpRelay = 3;
const int fanRelay = 4;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  Serial.begin(9600);
  dht.begin();
  lcd.init();
  lcd.backlight();
  
  lcd.setCursor(0, 0);
  lcd.print("Agritech");
  lcd.setCursor(0, 1);
  lcd.print("Greenhouse");
  delay(2000);
  lcd.clear();

  pinMode(moisturePin, INPUT);
  pinMode(waterPumpRelay, OUTPUT);
  pinMode(fanRelay, OUTPUT);

  // Set initial state (relays off)
  digitalWrite(waterPumpRelay, HIGH);
  digitalWrite(fanRelay, HIGH);
}

void loop()
{
  int moistureLevel = analogRead(moisturePin);
  float temp = dht.readTemperature();

  Serial.print("Moisture Level: ");
  Serial.println(moistureLevel);
  Serial.print("Temperature: ");
  Serial.println(temp);

  lcd.setCursor(0, 0);
  lcd.print("Moisture: ");
  lcd.print(moistureLevel);
  lcd.setCursor(0, 1);
  lcd.print("Temp: ");
  lcd.print(temp);
  lcd.print(" C");
  delay(3000);
  lcd.clear();

  // Water pump control
  if (moistureLevel > 400)
  {
    lcd.setCursor(0, 0);
    lcd.print("Moisture low");
    lcd.setCursor(0, 1);
    lcd.print("Pump ON");
    digitalWrite(waterPumpRelay, LOW);
    delay(2000);
    digitalWrite(waterPumpRelay, HIGH);
    lcd.clear();
  }
  else
  {
    lcd.setCursor(0, 0);
    lcd.print("Moisture OK");
    lcd.setCursor(0, 1);
    lcd.print("Pump OFF");
    digitalWrite(waterPumpRelay, HIGH);
    delay(2000);
    lcd.clear();
  }

  // Fan control
  if (temp > 25)
  {
    lcd.setCursor(0, 0);
    lcd.print("Temp High");
    lcd.setCursor(0, 1);
    lcd.print("Fan ON");
    digitalWrite(fanRelay, LOW);
    delay(2000);
    lcd.clear();
  }
  else
  {
    lcd.setCursor(0, 0);
    lcd.print("Temp OK");
    lcd.setCursor(0, 1);
    lcd.print("Fan OFF");
    digitalWrite(fanRelay, HIGH);
    delay(2000);
    lcd.clear();
  }

  delay(40000); // 40 seconds before next reading
}
