//DETERMINAR SI UNA MATRIZ ES SIMETRICA

#include <Arduino.h>
#include <VIDEO39.h>

const int MAZ_SIZE = 5;

void setup() {
    Serial.begin(115200);
    MatrizClase miMatriz(MAZ_SIZE);

    Serial.println("DIGITE EL TAMAÑO DE LA MATRIZ CUADRADA (MAXIMO 5): ");
    while (!Serial.available()) {}
    int size = Serial.parseInt();

    if (size != MAZ_SIZE || size > MAZ_SIZE) {
        Serial.println("\nLA MATRIZ INGRESADA ES MAYOR A 5");
        return;
    }

    miMatriz.ingresarMatriz();
    miMatriz.imprimirMatriz();

    if (miMatriz.esSimetrica()) {
        Serial.println("\nLA MATRIZ DIGITADA ES SIMETRICA");
    } else {
        Serial.println("\nLA MATRIZ DIGITADA NO ES SIMETRICA");
    }
}

void loop() {

}