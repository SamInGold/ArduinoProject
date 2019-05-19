#include <button.h>



Button btnR(2);
Button btnG(3);
Button btnB(4);
int red = 8;
int green = 9;
int blue = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (btnR.isPressed())
    digitalWrite(red, HIGH);
  else
    digitalWrite(red, LOW);


  if (btnG.isPressed())
    digitalWrite(green, HIGH);
  else
    digitalWrite(green, LOW);


  if (btnB.isPressed())
    digitalWrite(blue, HIGH);
  else
    digitalWrite(blue, LOW);
}
