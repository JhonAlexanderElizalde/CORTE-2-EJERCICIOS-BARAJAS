//MATRIZ ELEVADA AL CUADRADO

#include <Arduino.h>
#include "VIDEO75.h"

void setup() {
    Serial.begin(115200);
    while (!Serial);

    MatrizCuadrada calculadora;
    calculadora.ejecutar();
}

void loop() {

}