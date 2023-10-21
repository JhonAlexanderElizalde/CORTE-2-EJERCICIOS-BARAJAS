//EL CODIGO PIDE UN NUMERO Y LO MUESTRA EN EL SERIAL DEL MISMO.

#include <VIDEO3.h>
#include <Arduino.h>

TomaDeNumero mostrar;


void setup() {
  Serial.begin(115200);
  while (!Serial); 
}

void loop() {
  mostrar.digitarnumero();
  mostrar.salida();

  delay(3000);
}