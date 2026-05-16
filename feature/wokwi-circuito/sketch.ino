// Definição dos pinos
const int buzzer = 9;      // PWM pin para o buzzer
const int botao1 = 2;      // Botão para Dó
const int botao2 = 3;      // Botão para Ré
const int botao3 = 4;      // Botão para Mi
const int botao4 = 5;      // Botão para Fá

// Frequências das notas (em Hz)
const int DO = 262;        // C4
const int RE = 294;        // D4
const int MI = 330;        // E4
const int FA = 349;        // F4

// Duração das notas (em ms)
const int duracao = 300;

// Variáveis para debouncing
unsigned long ultimoTempo = 0;
const int debounce = 50;   // 50ms de debounce

void setup() {
  Serial.begin(9600);
  
  // Configurar pinos dos botões como entrada
  pinMode(botao1, INPUT_PULLUP);
  pinMode(botao2, INPUT_PULLUP);
  pinMode(botao3, INPUT_PULLUP);
  pinMode(botao4, INPUT_PULLUP);
  
  // Configurar pino do buzzer como saída
  pinMode(buzzer, OUTPUT);
  
  Serial.println("Piano iniciado!");
}

void loop() {
  // Verificar se passou o tempo de debounce
  if (millis() - ultimoTempo > debounce) {
    
    if (digitalRead(botao1) == LOW) {
      Serial.println("Tocando Dó");
      tone(buzzer, DO, duracao);
      ultimoTempo = millis();
      delay(duracao + 100);
    }
    else if (digitalRead(botao2) == LOW) {
      Serial.println("Tocando Ré");
      tone(buzzer, RE, duracao);
      ultimoTempo = millis();
      delay(duracao + 100);
    }
    else if (digitalRead(botao3) == LOW) {
      Serial.println("Tocando Mi");
      tone(buzzer, MI, duracao);
      ultimoTempo = millis();
      delay(duracao + 100);
    }
    else if (digitalRead(botao4) == LOW) {
      Serial.println("Tocando Fá");
      tone(buzzer, FA, duracao);
      ultimoTempo = millis();
      delay(duracao + 100);
    }
  }
}
