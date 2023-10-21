//TRANSFORMAR UNA CADENA A NUMERO ENTERO

#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  while (!Serial);

  String cadena = "12345";
  int numero_entero = cadena.toInt();
  Serial.print("\nNúmero entero: ");
  Serial.println(numero_entero);

}

void loop() {

}