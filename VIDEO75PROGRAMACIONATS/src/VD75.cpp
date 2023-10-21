#include <VIDEO75.h>
#include <Arduino.h>

MatrizCuadrada::MatrizCuadrada() {}

void MatrizCuadrada::ejecutar() {
    Serial.println("\nDIGITE EL NÚMERO DE FILAS Y COLUMNAS DE LA MATRIZ CUADRADA (MÁXIMO 5): ");
    while (!Serial.available()) {}
    int dimension = obtenerDimension();

    if (dimension <= 0 || dimension > 5) {
        Serial.println("\nEL TAMAÑO DE LA MATRIZ DEBE SER MENOR O IGUAL A 5.");
    } else {
        int matriz[5][5];
        int matrizCuadrada[5][5];

        ingresarMatriz(dimension, matriz);
        elevarAlCuadrado(dimension, matriz, matrizCuadrada);

        Serial.println("\nMATRIZ INGRESADA POR EL USUARIO:\n");
        mostrarMatriz(dimension, matriz);

        Serial.println("\nMATRIZ ELEVADA AL CUADRADO:\n");
        mostrarMatriz(dimension, matrizCuadrada);
    }
}

int MatrizCuadrada::obtenerDimension() {
    while (!Serial.available()) {}
    return Serial.parseInt();
}

void MatrizCuadrada::ingresarMatriz(int dimension, int matriz[][5]) {
    Serial.println("\nINGRESE LOS DATOS DE LA MATRIZ: ");

    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            Serial.print("\nElemento [" + String(i) + "][" + String(j) + "]: ");
            while (!Serial.available()) {}
            matriz[i][j] = Serial.parseInt();
        }
    }
}

void MatrizCuadrada::elevarAlCuadrado(int dimension, int matriz[][5], int matrizCuadrada[][5]) {
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            matrizCuadrada[i][j] = matriz[i][j] * matriz[i][j];
        }
    }
}

void MatrizCuadrada::mostrarMatriz(int dimension, int matriz[][5]) {
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            Serial.print(matriz[i][j]);
            if (j < dimension - 1) {
                Serial.print("\t");
            }
        }
        Serial.println();
    }
}