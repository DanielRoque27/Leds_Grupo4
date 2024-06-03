
// entradas
int ledDaniel = 2;
int ledSophia = 7;
int ledAimee = 13;
int ledLele = 10;

// tempo de ultima ação
long ultimoTempoDaniel = 0;
long ultimoTempoSophia1 = 0;
long ultimoTempoSophia2 = 0;
long ultimoTempoAimee = 0;
long ultimoTempoLele = 0;

long tempo = 0;

void setup() {
  pinMode(ledDaniel, OUTPUT); // led Daniel verde
  pinMode(ledSophia, OUTPUT); // led Sophia vermelho
  pinMode(ledAimee, OUTPUT); // led Aimee vermelha
  pinMode(ledLele, OUTPUT); // led Le vermelha
}

void loop() {
  long tempo = millis(); // tempo = quanto tempo o programa esta rodando em ms

  // DANIEL _________________________-------------------
  
  if (tempo - ultimoTempoDaniel >= 500) // Se tempo - Ultima vez que fez algo for maior ou igual a 500ms faça ----- Faz uma coisa a cada 500ms
  {
    ultimoTempoDaniel = tempo; // Registra o ultimo tempo que essa ação foi feita para calculo acima
    digitalWrite(ledDaniel, !digitalRead(ledDaniel) ); // acende ou apaga
  }

  // AIMEE ____________________________----------------------------

  if (tempo - ultimoTempoAimee >= 1000) // Se tempo - Ultima vez que fez algo for maior ou igual a 1000ms faça ----- Faz uma coisa a cada 1000ms
  {
    ultimoTempoAimee = tempo; // Registra o ultimo tempo que essa ação foi feita para calculo acima
    digitalWrite(ledAimee, !digitalRead(ledAimee) ); // acende ou apaga
  }

  // LETICIA__________________________-------------------------------

  if (tempo - ultimoTempoLele >= 150) // Se tempo - Ultima vez que fez algo for maior ou igual a 150ms faça ----- Faz uma coisa a cada 150ms
  {
    ultimoTempoLele = tempo; // Registra o ultimo tempo que essa ação foi feita para calculo acima
    digitalWrite(ledLele, !digitalRead(ledLele) ); // acende ou apaga
  }

  // SOPHIA ___________________________------------------------------

  if (tempo - ultimoTempoSophia1 >= 1000){ // Se tempo - Ultima vez que fez algo for maior ou igual a 1000ms faça ----- Faz uma coisa a cada 1000ms, neste caso verifica
    ultimoTempoSophia1 = tempo;// Registra o ultimo tempo que essa ação foi feita para calculo acima
    if (digitalRead(ledSophia) == 1){ // A cada 1s, Se estiver acessa apague
      digitalWrite(ledSophia, 0); // apague
    }
    if (tempo - ultimoTempoSophia2 >= 2000){ // Se tempo - Ultima vez que fez algo for maior ou igual a 2000ms faça ----- Faz uma coisa a cada 2000ms, neste caso verifica
      ultimoTempoSophia2 = tempo;// Registra o ultimo tempo que essa ação foi feita para calculo acima
      if (digitalRead(ledSophia) == 0){ // A cada 2s, Se estiver apagada acenda 
        digitalWrite(ledSophia, 1); // acende
      }
    }
  }
}
