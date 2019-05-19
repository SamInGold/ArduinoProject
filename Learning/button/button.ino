#include <button.h>

Button btn(5);
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(btn.isPressed()){
    digitalWrite(13,HIGH);
  }else
    digitalWrite(13,LOW);
}
