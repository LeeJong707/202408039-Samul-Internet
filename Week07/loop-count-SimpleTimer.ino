#include <SimpleTimer.h>
SimpleTimer timerCnt;

unsigned long loopCnt;

void timerCntFunC() {
  Serial.println(loopCnt);
  loopCnt = 0;
}

void setup() {
  Serial.begin(115200);
  Serial.println();

  timerCnt.setInterval(1000,timerCntFunC); // milli-sec, func
}

void loop() {
  timerCnt.run();
  loopCnt++; // loopCnt = loopCnt + 1;
}
