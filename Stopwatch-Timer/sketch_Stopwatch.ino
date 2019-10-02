#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);

void setup()
{
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  Serial.begin(9600);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  
  lcd.begin(16,2);
  lcd.clear();
  
}
double i,a,c;

void loop()
{
  lcd.clear();
  lcd.print("Press Start");
  delay(100);
  if(digitalRead(8)==LOW)
  {
    lcd.clear();
    a=millis();
    while(digitalRead(9)==HIGH)
    {
      c=millis();
      lcd.clear();
      i=(c-a)/1000;
      lcd.setCursor(0,0);
      lcd.print(i);
      lcd.setCursor(11,0);
      lcd.print("Sec's");
      lcd.clear();
      Serial.println(c);
      Serial.println(a);
      Serial.println(i);
      Serial.println("----------");
      delay(100);
    }
    if(digitalRead(9)==LOW)
    {
      while(digitalRead(8)==LOW)
      {
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print(i);
        lcd.setCursor(11,0);
        lcd.print("Sec's");
        delay(100);
        lcd.clear();
      }
    }
  }
}

