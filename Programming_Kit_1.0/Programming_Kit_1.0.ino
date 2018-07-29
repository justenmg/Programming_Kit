
#define UP A1
#define DOWN 5
#define LEFT A2
#define RIGHT A0
#define X 12
#define Y 7
#define B 8
#define A 13
#define LED_1 9
#define LED_2 10
#define LED_3 11
#define SPEAKER 2
#define PWM 6



void setup() {
pinMode(LED_1, OUTPUT);
pinMode(LED_2, OUTPUT);
pinMode(LED_3, OUTPUT);
pinMode(X,INPUT_PULLUP);
pinMode(Y,INPUT_PULLUP);
pinMode(B,INPUT_PULLUP);
}

void loop() {

  if(!digitalRead(X))
  {
    digitalWrite(LED_1,HIGH);
  }
  else
  {
    digitalWrite(LED_1,LOW);
  }

  if(!digitalRead(Y))
  {
    digitalWrite(LED_2,HIGH);
  }
  else
  {
    digitalWrite(LED_2,LOW);
  }

  if(!digitalRead(B))
  {
    digitalWrite(LED_3,HIGH);
  }
  else
  {
    digitalWrite(LED_3,LOW);
  }

}
