bool state = false;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

  if(state == false)
  {
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    state = true;
    delay(1000);
  }
  else
  {
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    state = false;
    delay(400);
  }
}
