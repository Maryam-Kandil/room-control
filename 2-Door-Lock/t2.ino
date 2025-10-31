
 


#include <LiquidCrystal.h>
#include <Keypad.h>
#define led 7
const byte ROWS = 4; 
const byte COLS = 3; 
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {3, 2, 1, 0}; 
byte colPins[COLS] = {4, 5, 6}; 

char storepass[]="1234";
int i=0, count=0,num=sizeof(storepass)-1;
char pass[sizeof(storepass)-1];
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() { 
  lcd.begin(16, 2);
  lcd.print("Enter the password");
  lcd.setCursor(0, 1);
  pinMode(led,OUTPUT);
}

void loop() {

  
 char key = keypad.getKey();
  
  if (key>'0'&&key!='#'){
    lcd.print('*');
    pass[i]=key;
    i++;
  
}
else if(key=='#')
{
 if(i==num)
 {
   for(int j=0;j<num;j++)
   {
    if(pass[j]==storepass[j])
    {
      count++;
    }
   }if(count==num)
   {
    lcd.clear();
    digitalWrite(led,HIGH);
    lcd.setCursor(0,0);
    lcd.print("correct pass    ");
    delay(2000);
    i=0;
    count=0;
    lcd.setCursor(0,0);
    lcd.print("Enter the pass   ");
    lcd.setCursor(0,1);
   }else
   {
    printt();
   }
  }else
  {
   printt();
 }
}
}

void printt(){
   lcd.clear();
    digitalWrite(led,LOW);
    lcd.setCursor(0,0);
    lcd.print("Worng pass    ");
    delay(2000);
    i=0;
    count=0;
    lcd.setCursor(0,0);
    lcd.print("Enter the pass   ");
    lcd.setCursor(0,1);
}
