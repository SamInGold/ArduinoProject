#include <ultraSonic.h>

UltraSonic uSonic(7,6);

void setup() {
   Serial.begin(9600); // Starting Serial Terminal
}

void loop() {
   Serial.print(uSonic.getDistanceInInch());
   Serial.print("in, ");
   Serial.print(uSonic.getDistanceInCm());
   Serial.print("cm");
   Serial.println();
   delay(100);
}
