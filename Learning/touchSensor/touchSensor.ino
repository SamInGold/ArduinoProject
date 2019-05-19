#include <touchSensor.h>
TouchSensor touchSensor(2);
bool touched;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  touched=false;
}

void loop() {
  // put your main code here, to run repeatedly:
  if(touchSensor.isTouched() && !touched){
    Serial.println("Touching");
    touched=true;
  }else if(!(touchSensor.isTouched()) && touched){
    Serial.println("No longer touching");
    touched=false;
  }
   
}
