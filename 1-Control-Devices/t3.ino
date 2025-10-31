
#include <Keypad.h>
#define led1 13
#define led2 12
#define led3 11

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

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}
  
void loop(){
  char key = keypad.getKey();
  
 switch (key){
    case '1':digitalWrite(led1,HIGH);break;
    case '2':digitalWrite(led2,HIGH);break;
    case '3':digitalWrite(led3,HIGH);break;
    case '4':digitalWrite(led1,LOW);break;
    case '5':digitalWrite(led2,LOW);break;
    case '6':digitalWrite(led3,LOW);break;
    
      
    }    if(key=='#'){
           digitalWrite(led1,LOW);
           digitalWrite(led2,LOW);
           digitalWrite(led3,LOW);    
      }
      else if(key=='*')
      {
       digitalWrite(led1,HIGH);
       digitalWrite(led2,HIGH);
       digitalWrite(led3,HIGH); 
      }
      }
  
