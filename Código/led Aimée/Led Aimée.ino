// C++ code
//
void setup()
{
   pinMode(13, OUTPUT);
  
}

void loop()
{
  digitalWrite(13, LOW); // Led Vermelho apaga
  delay(1000); // Tempo de 1 segundo de espera
  digitalWrite(13, HIGH); // Led Vermelho acende
  delay(1000); // Tempo de 1 segundo de espera
}