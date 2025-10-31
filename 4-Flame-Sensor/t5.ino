#define Flame_pin 13
int flame_value;
void setup() {
   Serial.begin(9600); 
  pinMode(2,OUTPUT);

}

void loop() {
  flame_value = digitalRead(Flame_pin); 
   Serial.print(flame_value);
   if(flame_value==HIGH){
      digitalWrite(2,HIGH);
      Serial.print(" Fire   ");
   }
   else{
      digitalWrite(2,LOW);
      Serial.print(" Save moode ");
   }
   delay(1000); 

}
