int pinA3 = 13;
int pinA2 = 12;
int pinA1 = 11;
int pinA0 = 10;

int pinB3 = 7;
int pinB2 = 6;
int pinB1 = 5;
int pinB0 = 4;

void setup() {
  pinMode(pinA3, OUTPUT);
  pinMode(pinA2, OUTPUT);
  pinMode(pinA1, OUTPUT);
  pinMode(pinA0, OUTPUT);

  pinMode(pinB3, OUTPUT);
  pinMode(pinB2, OUTPUT);
  pinMode(pinB1, OUTPUT);
  pinMode(pinB0, OUTPUT);
}

void loop() {
  /* DETERMINAR EL NUMERO EN BINARIO SIENDO A3-B3-MSB  Y   A0-B0-LSB*/
  /*A = 0*/
  digitalWrite(pinA3, HIGH);
  digitalWrite(pinA2, LOW);
  digitalWrite(pinA1, LOW);
  digitalWrite(pinA0, LOW);  
  /*B = 1*/
  digitalWrite(pinB3, LOW);
  digitalWrite(pinB2, LOW);
  digitalWrite(pinB1, LOW);
  digitalWrite(pinB0, HIGH);

}
