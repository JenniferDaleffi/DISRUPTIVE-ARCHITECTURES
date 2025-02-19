// R = 150 Ohms

/* 
Exemplo 1: Os 3 leds deverão piscar simultanemante em intervalos de 400ms

Exemplo 2: Os leds verde e vermelho devereão  piscar alternadamente em intervalos de 400 ms

Exemplo 3: 
Crie um código para simular o semáforo.
Verde --> 4 seg
Amarelo --> 1 seg
Vermelho --> 6 seg
*/

// Atribuir nome aos pinos e leds
#define ledRED 2
#define ledVEL 5
#define ledGRE 9

void setup() {
  //EXEMPLO 2
  pinMode(ledRED, OUTPUT);
  pinMode(ledVEL, OUTPUT);
  pinMode(ledGRE, OUTPUT);
}

void loop() {
 // ex1();
  ex2();
  //ex3();

}

void ex1(){
  digitalWrite(ledRED, HIGH);
  digitalWrite(ledVEL, HIGH);
  digitalWrite(ledGRE, HIGH);
  delay(300);
  digitalWrite(ledRED, LOW);
  digitalWrite(ledVEL, LOW);
  digitalWrite(ledGRE, LOW);
  delay(300);
}

void ex2(){
  digitalWrite(ledRED, HIGH);
  digitalWrite(ledGRE, LOW);
  delay(300);
  digitalWrite(ledRED, LOW);
  digitalWrite(ledGRE, HIGH);
  delay(300);

}

void ex3(){
  digitalWrite(ledRED, HIGH);
  delay(6000);
  digitalWrite(ledRED, LOW);
  digitalWrite(ledGRE, HIGH);
  delay(4000);
  digitalWrite(ledGRE, LOW);
  digitalWrite(ledVEL, HIGH);
  delay(1000);
  digitalWrite(ledVEL, LOW);


}