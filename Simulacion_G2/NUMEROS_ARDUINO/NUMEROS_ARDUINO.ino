// Pines para los LEDs
const int pin13 = 13; // MSB
const int pin12 = 12;
const int pin11 = 11;
const int pin10 = 10; // LSB

void setup() {
  // Configuramos los pines como salida
  pinMode(pin13, OUTPUT);
  pinMode(pin12, OUTPUT);
  pinMode(pin11, OUTPUT);
  pinMode(pin10, OUTPUT);
}

void loop() {
  // Recorremos los números del 0 al 9
  for (int i = 0; i < 10; i++) {
    // Mostramos el número en binario
    mostrarBinario(i);
    // Esperamos 1 segundo
    delay(1000);
  }
}

void mostrarBinario(int numero) {
  // Convertimos el número a binario y lo mostramos en los LEDs
  digitalWrite(pin13, bitRead(numero, 3)); // MSB
  digitalWrite(pin12, bitRead(numero, 2));
  digitalWrite(pin11, bitRead(numero, 1));
  digitalWrite(pin10, bitRead(numero, 0)); // LSB
}

