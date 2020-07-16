void relayBegin()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(2, OUTPUT);

  delay(1000);

  digitalWrite(2, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(14, HIGH);
}

void setRelay(bool rState[])
{
  digitalWrite(13,  !rState[0]);
  digitalWrite(12, !rState[1]);
  digitalWrite(14, !rState[2]);
  digitalWrite(2, !rState[3]);
}
