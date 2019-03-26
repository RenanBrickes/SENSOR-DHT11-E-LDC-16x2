//Criado por Renan Brickes
#include <LiquidCrystal.h>
#include "DHT.h"
 
#define DHTPIN A0 
#define DHTTYPE DHT11 

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
DHT dht(DHTPIN, DHTTYPE);
 
void setup() 
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  dht.begin();
}
 
void loop() 
{  

  float h = dht.readHumidity();
  float t = dht.readTemperature();

    lcd.setCursor(0, 0);
    //Envia o texto entre aspas para o LCD
    lcd.print("Umidade: ");
    Serial.print(h);
    lcd.print(h);
    lcd.setCursor(0, 1);
    lcd.print("Tempe: ");
    lcd.print(t);
    lcd.print("C");
    delay(5000);
    
}
