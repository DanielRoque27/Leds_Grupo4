// C++ code
//
void setup()
{
 // Declarar as variáveis
  pinMode(2, OUTPUT); // led vermelho 1
    
}
//Adicionar código "loop", para sempre o semáforo e o fluxo do trânsito continuar.

void loop()
{
    digitalWrite(2, HIGH); //acende o led vermelho 
    delay(1000); // Esperar 1 segundo
    digitalWrite(2, LOW); // apagar o led vermelho
    delay (2000);
    
}


