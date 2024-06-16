int pinAA = 10;
int pinAB = 9;
int pinAC = 8;
int pinAD = 7;

int pinBA = 5;
int pinBB = 4;
int pinBC = 3;
int pinBD = 2;

int pinCB = 13;
int pinCC = 12;
int pinCD = 11;

char datoA;
char datoB;
char datoC;

void setup() {
  pinMode(pinAA, OUTPUT);
  pinMode(pinAB, OUTPUT);
  pinMode(pinAC, OUTPUT);
  pinMode(pinAD, OUTPUT);

  pinMode(pinBA, OUTPUT);
  pinMode(pinBB, OUTPUT);
  pinMode(pinBC, OUTPUT);
  pinMode(pinBD, OUTPUT);

  pinMode(pinCB, OUTPUT);
  pinMode(pinCC, OUTPUT);
  pinMode(pinCD, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 3) {
    char startChar = Serial.read();
    if (startChar == 'S') {
      datoA = Serial.read();
      datoB = Serial.read();
      datoC = Serial.read();
      
      //(Número A)
      switch(datoA) {
        case '0': digitalWrite(pinAA, LOW); digitalWrite(pinAB, LOW); digitalWrite(pinAC, LOW); digitalWrite(pinAD, LOW); break;
        case '1': digitalWrite(pinAA, LOW); digitalWrite(pinAB, LOW); digitalWrite(pinAC, LOW); digitalWrite(pinAD, HIGH); break;
        case '2': digitalWrite(pinAA, LOW); digitalWrite(pinAB, LOW); digitalWrite(pinAC, HIGH); digitalWrite(pinAD, LOW); break;
        case '3': digitalWrite(pinAA, LOW); digitalWrite(pinAB, LOW); digitalWrite(pinAC, HIGH); digitalWrite(pinAD, HIGH); break;
        case '4': digitalWrite(pinAA, LOW); digitalWrite(pinAB, HIGH); digitalWrite(pinAC, LOW); digitalWrite(pinAD, LOW); break;
        case '5': digitalWrite(pinAA, LOW); digitalWrite(pinAB, HIGH); digitalWrite(pinAC, LOW); digitalWrite(pinAD, HIGH); break;
        case '6': digitalWrite(pinAA, LOW); digitalWrite(pinAB, HIGH); digitalWrite(pinAC, HIGH); digitalWrite(pinAD, LOW); break;
        case '7': digitalWrite(pinAA, LOW); digitalWrite(pinAB, HIGH); digitalWrite(pinAC, HIGH); digitalWrite(pinAD, HIGH); break;
        case '8': digitalWrite(pinAA, HIGH); digitalWrite(pinAB, LOW); digitalWrite(pinAC, LOW); digitalWrite(pinAD, LOW); break;
        case '9': digitalWrite(pinAA, HIGH); digitalWrite(pinAB, LOW); digitalWrite(pinAC, LOW); digitalWrite(pinAD, HIGH); break;
        case '10': digitalWrite(pinAA, HIGH); digitalWrite(pinAB, LOW); digitalWrite(pinAC, HIGH); digitalWrite(pinAD, LOW); break;
        case '11': digitalWrite(pinAA, HIGH); digitalWrite(pinAB, LOW); digitalWrite(pinAC, HIGH); digitalWrite(pinAD, HIGH); break;
        case '12': digitalWrite(pinAA, HIGH); digitalWrite(pinAB, HIGH); digitalWrite(pinAC, LOW); digitalWrite(pinAD, LOW); break;
        case '13': digitalWrite(pinAA, HIGH); digitalWrite(pinAB, HIGH); digitalWrite(pinAC, LOW); digitalWrite(pinAD, HIGH); break;
        case '14': digitalWrite(pinAA, HIGH); digitalWrite(pinAB, HIGH); digitalWrite(pinAC, HIGH); digitalWrite(pinAD, LOW); break;
        case '15': digitalWrite(pinAA, HIGH); digitalWrite(pinAB, HIGH); digitalWrite(pinAC, HIGH); digitalWrite(pinAD, HIGH); break;
      }
      
      //(Número B)
      switch(datoB) {
        case '0': digitalWrite(pinBA, LOW); digitalWrite(pinBB, LOW); digitalWrite(pinBC, LOW); digitalWrite(pinBD, LOW); break;
        case '1': digitalWrite(pinBA, LOW); digitalWrite(pinBB, LOW); digitalWrite(pinBC, LOW); digitalWrite(pinBD, HIGH); break;
        case '2': digitalWrite(pinBA, LOW); digitalWrite(pinBB, LOW); digitalWrite(pinBC, HIGH); digitalWrite(pinBD, LOW); break;
        case '3': digitalWrite(pinBA, LOW); digitalWrite(pinBB, LOW); digitalWrite(pinBC, HIGH); digitalWrite(pinBD, HIGH); break;
        case '4': digitalWrite(pinBA, LOW); digitalWrite(pinBB, HIGH); digitalWrite(pinBC, LOW); digitalWrite(pinBD, LOW); break;
        case '5': digitalWrite(pinBA, LOW); digitalWrite(pinBB, HIGH); digitalWrite(pinBC, LOW); digitalWrite(pinBD, HIGH); break;
        case '6': digitalWrite(pinBA, LOW); digitalWrite(pinBB, HIGH); digitalWrite(pinBC, HIGH); digitalWrite(pinBD, LOW); break;
        case '7': digitalWrite(pinBA, LOW); digitalWrite(pinBB, HIGH); digitalWrite(pinBC, HIGH); digitalWrite(pinBD, HIGH); break;
        case '8': digitalWrite(pinBA, HIGH); digitalWrite(pinBB, LOW); digitalWrite(pinBC, LOW); digitalWrite(pinBD, LOW); break;
        case '9': digitalWrite(pinBA, HIGH); digitalWrite(pinBB, LOW); digitalWrite(pinBC, LOW); digitalWrite(pinBD, HIGH); break;
        case '10': digitalWrite(pinBA, HIGH); digitalWrite(pinBB, LOW); digitalWrite(pinBC, HIGH); digitalWrite(pinBD, LOW); break;
        case '11': digitalWrite(pinBA, HIGH); digitalWrite(pinBB, LOW); digitalWrite(pinBC, HIGH); digitalWrite(pinBD, HIGH); break;
        case '12': digitalWrite(pinBA, HIGH); digitalWrite(pinBB, HIGH); digitalWrite(pinBC, LOW); digitalWrite(pinBD, LOW); break;
        case '13': digitalWrite(pinBA, HIGH); digitalWrite(pinBB, HIGH); digitalWrite(pinBC, LOW); digitalWrite(pinBD, HIGH); break;
        case '14': digitalWrite(pinBA, HIGH); digitalWrite(pinBB, HIGH); digitalWrite(pinBC, HIGH); digitalWrite(pinBD, LOW); break;
        case '15': digitalWrite(pinBA, HIGH); digitalWrite(pinBB, HIGH); digitalWrite(pinBC, HIGH); digitalWrite(pinBD, HIGH); break;
      }

      //(Operación)
      switch(datoC) {
        case '0': digitalWrite(pinCB, LOW); digitalWrite(pinCC, LOW); digitalWrite(pinCD, LOW); break;
        case '1': digitalWrite(pinCB, LOW); digitalWrite(pinCC, LOW); digitalWrite(pinCD, HIGH); break;
        case '2': digitalWrite(pinCB, LOW); digitalWrite(pinCC, HIGH); digitalWrite(pinCD, LOW); break;
        case '3': digitalWrite(pinCB, LOW); digitalWrite(pinCC, HIGH); digitalWrite(pinCD, HIGH); break;
        case '4': digitalWrite(pinCB, HIGH); digitalWrite(pinCC, LOW); digitalWrite(pinCD, LOW); break;
        case '5': digitalWrite(pinCB, HIGH); digitalWrite(pinCC, LOW); digitalWrite(pinCD, HIGH); break;
        case '6': digitalWrite(pinCB, HIGH); digitalWrite(pinCC, HIGH); digitalWrite(pinCD, LOW); break;
        case '7': digitalWrite(pinCB, HIGH); digitalWrite(pinCC, HIGH); digitalWrite(pinCD, HIGH); break;
      }
    }
  }
}
