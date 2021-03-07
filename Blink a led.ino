int ledpin=13;//intialise pin 13 as ledpin.
void setup()//set up the arduino board
{
  pinMode(ledpin, OUTPUT);//set pin 13 has output.
}

void loop()// this executes multiple times
{
  digitalWrite(ledpin, HIGH);//set ledpin to high
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledpin, LOW);//set ledpin to low
  delay(1000); // Wait for 1000 millisecond(s)
}
