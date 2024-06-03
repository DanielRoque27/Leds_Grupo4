// C++ code
//
void setup()
{
 // Declarar as variáveis
  pinMode(10, OUTPUT); // led vermelho 1
    
}
//Adicionar código "loop", para sempre o semáforo e o fluxo do trânsito continuar.

void loop()
{
    digitalWrite(10, HIGH); //acende o led vermelho 
    delay(1000); // Esperar 1 segundo
    digitalWrite(10, LOW); // apagar o led vermelho
    delay (2000);
    
}


