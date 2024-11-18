#include <IRremoteESP8266.h>
#include <IRutils.h>
#include <IRrecv.h>
#include <Arduino.h>

#define IRPin 4

IRrecv receiver(IRPin);

decode_results results; // To store the result of the decoded IR Signal

void IRbegin()
{
  receiver.enableIRIn();
}

void IReceive(bool rState[])
{
  if (receiver.decode(&results)) // check if decoding the the received data is possible
  {

    long long val = results.value;
    switch (val)
    {
    case 16724175:
      Serial.println("s1");
      rState[0] = !rState[0];
      break;

    case 2534850111:
      Serial.println("se2");
      rState[0] = !rState[0];
      break;

    case 16718055:
      Serial.println("se3");
      rState[1] = !rState[1];
      break;

    case 1033561079:
      Serial.println("se4");
      rState[1] = !rState[1];
      break;

    case 16743045:
      Serial.println("se5");
      rState[2] = !rState[2];
      break;

    case 1635910171:
      Serial.println("se6");
      rState[2] = !rState[2];
      break;

    case 16716015:
      Serial.println("se7");
      rState[3] = !rState[3];
      break;

    case 2351064443:
      Serial.println("se8");
      rState[3] = !rState[3];
      break;

    default:
      break;
    }

    receiver.resume();
  }
}
