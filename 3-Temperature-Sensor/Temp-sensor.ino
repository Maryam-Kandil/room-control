
#include <LiquidCrystal.h>
#define sensor A0
#define led 13
int value=0;
float volt=0;
int temp=0;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  
  lcd.begin(16, 2);
  lcd.print("temp=");
  pinMode(led,OUTPUT);
  
}

void loop() {
  
 value=analogRead(sensor);
 volt=(5.0/1023)*value;
 temp=volt/0.01;
 delay(500);
 lcd.setCursor(6, 0);
  lcd.print(temp);
  lcd.print("C");
 if(temp>25)
  digitalWrite(led,HIGH);
else
  digitalWrite(led,LOW);

  
  
 
}
