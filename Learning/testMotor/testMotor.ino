#include <button.h>

  Button btn(8);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(btn.isPressed())
   {
      Serial.print("Pressed");
   }
}
