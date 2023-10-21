//POTENCIA - PIDE NUMERO Y PIDE ELEVACION

#include <Arduino.h>
#include "VIDEO66.h"

void setup() {
    Serial.begin(115200);
    while (!Serial);

    CalculadoraPotencia calculadora;
    calculadora.ejecutar();
}

void loop() {

}