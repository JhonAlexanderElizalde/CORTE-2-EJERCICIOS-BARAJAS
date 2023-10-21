//EL CODIGO PIDE UN NUMERO DEL 1 AL 5 - SE USAN LOS CASE

#include <Arduino.h>
#include <VIDEO12.h>

NumeroDigitado Imprimir;

void setup() {
  Serial.begin(115200);
  while (!Serial);
}

void loop() {
  Imprimir.pedirNumero();
  Imprimir.Numero();
  delay(3000);
}