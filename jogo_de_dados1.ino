const int botao = 10; //define o pino do botão
const int contador = 6; //cria o contador
const int leds[contador] = {2, 3, 4, 5, 6, 7}; // pinos dos LEDs

void setup() { //"arruma a casa"
  pinMode(botao, INPUT); //diz que o pino do botão recebe infos (entrada)
  for (int i = 0; i < contador; i++) { //roda cada pino
    pinMode(leds[i], OUTPUT); //define cada um como saida
    digitalWrite(leds[i], LOW); //desliga eles
  }
}

void loop() { //ciclo do programa
  if (digitalRead(botao) == HIGH) { //se o botao for precionado
    int aleatorio = random(1, 7); // sorteia um número entre 1 e 6
    for (int i = 0; i < aleatorio; i++) { //roda os pinos sorteados
      digitalWrite(leds[i], HIGH); // liga os LEDs
    }
    delay(1000); // mantém os LEDs ligados por 1 segundo
    for (int i = 0; i < contador; i++) { //roda todos os pinos
      digitalWrite(leds[i], LOW); // desliga todos os LEDs
    }
    delay(1000); // aguarda 1 segundo antes de aceitar outro pressionamento do botão
  }
}