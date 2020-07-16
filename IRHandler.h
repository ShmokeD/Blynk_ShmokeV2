#include "IRremoteESP8266.h"
#include "IRutils.h"
#include "IRrecv.h"

#define IRPin = 4

IRrecv receiver(4);


decode_results results;                        //To store the result of the decoded IR Signal

void IRbegin()
{
    receiver.enableIRIn();
}

void IReceive(bool rState[])
{
    if (receiver.decode(&results)) // check if decoding the the received data is possible
    {

        long long val = results.value;

        if (val == 16724175)

            rState[3] = !rState[3];

        else if (val == 2534850111)

            rState[3] = !rState[3];

        else if (val == 16718055)

            rState[1] = !rState[1];

        else if (val == 1033561079)

            rState[1] = !rState[1];

        else if (val == 16743045)

            rState[2] = !rState[2];

        else if (val == 1635910171)

            rState[2] = !rState[2];

        else if (val == 16716015)
            rState[0] = !rState[0];

        else if (val == 2351064443)

            rState[0] = !rState[0];
    }
}
