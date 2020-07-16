void relayBegin()
{
    pinMode(2, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
    pinMode(14, OUTPUT);
}

void setRelay(bool rState[])
{
    digitalWrite(2, rState[0]);
    digitalWrite(12, rState[1]);
    digitalWrite(13, rState[2]);
    digitalWrite(14, rState[3]);
}
