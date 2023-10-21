#include "VIDEO39.h"
#include <Arduino.h>

MatrizClase::MatrizClase(int size) {
    this->size = size;
    matriz = new int*[size];
    for (int i = 0; i < size; i++) {
        matriz[i] = new int[size];
    }
}

MatrizClase::~MatrizClase() {
    for (int i = 0; i < size; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
}

bool MatrizClase::esSimetrica() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                return false;
            }
        }
    }
    return true;
}

void MatrizClase::ingresarMatriz() {
    Serial.println("DIGITE LOS NUMEROS QUE CONTIENE LA MATRIZ");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            Serial.print("\nNUMERO [" + String(i) + "][" + String(j) + "]: ");
            while (!Serial.available()) {}
            matriz[i][j] = Serial.parseInt();
        }
    }
}

void MatrizClase::imprimirMatriz() {
    Serial.println("MATRIZ DIGITADA: ");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            Serial.print(matriz[i][j]);
            Serial.print("\t");
        }
        Serial.println();
    }
}