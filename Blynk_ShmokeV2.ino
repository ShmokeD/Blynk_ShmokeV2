#include "IRHandler.h"
#include "relayHandler.h"

bool rState[4] = {false, false, false, false}; // To store the State of the relays

void setup() {
IRbegin();
relayBegin();

}

void loop() {
  IReceive(rState);
  setRelay(rState);

}
