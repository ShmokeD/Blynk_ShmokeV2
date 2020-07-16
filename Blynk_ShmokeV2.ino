#include "IRHandler.h"
#include "relayHandler.h"

#define PIRpin 5

bool rState[4] = {false, false, false, false}; // To store the State of the relays
bool offRelay[4] = {false, false, false, false}; //default state for when nobody in room


void setup() {

Serial.begin(115200);
Serial.println("Test Start");

pinMode(PIRpin, INPUT);

IRbegin();
relayBegin();

}

void loop() {
  IReceive(rState);
  if(digitalRead(PIRpin))
  setRelay(rState);

  else
  setRelay(offRelay);
  
}
