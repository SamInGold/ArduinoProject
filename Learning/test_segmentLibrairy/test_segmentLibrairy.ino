#include <sevenSegmentDisplay.h>
SevenSegmentDisplay segment(6,5,4,7,3,2,8,9);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  segment.roll(true,2000);
  /*segment.roll(false,2000);
  segment.infinity(true,2000);
  segment.infinity(false,2000);*/
}
