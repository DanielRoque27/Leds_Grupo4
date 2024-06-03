// C++ code
//
void setup ()
{

pinMode (7, OUTPUT); // led azul
}

void loop()
{
  digitalWrite(7, HIGH); // ligar led azul
  delay(150); 
  
  digitalWrite(7, LOW); // desligar led azul
  delay(150);
 
  digitalWrite(7, HIGH); // ligar led azul
  delay(150); 
  
  digitalWrite(7, LOW); // desligar led azul

}