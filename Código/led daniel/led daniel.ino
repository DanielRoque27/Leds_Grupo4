// C++ code
//

int led = 2;
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led, 1);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  
  for(int i = 0; i < 5; i++) // repita 5x 
  {
    digitalWrite(led, 1);
    delay(200); // Wait for 200 millisecond(s)
    digitalWrite(led, 0);
    delay(200); // Wait for 200 millisecond(s)
  }
  
}