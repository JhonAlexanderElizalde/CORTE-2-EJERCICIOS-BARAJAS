#include <VIDEO66.h>
#include <Arduino.h>

CalculadoraPotencia::CalculadoraPotencia() {}

void CalculadoraPotencia::ejecutar() {
    Serial.println("\nDIGITE UN NÚMERO POSITIVO: ");
    while (!Serial.available()) {}
    float numero = obtenerNumero();

    Serial.println("DIGITE LA POTENCIA A LA QUE DESEA ELEVAR:");
    while (!Serial.available()) {}
    int potencia = obtenerPotencia();

    if (potencia < 0) {
        Serial.println("\nLA POTENCIA DEBE SER UN NÚMERO POSITIVO");
    } else {
        float resultado = 1.0;
        for (int i = 0; i < potencia; i++) {
            resultado *= numero;
        }
        Serial.print("LA SOLUCIÓN DE ");
        Serial.print(numero);
        Serial.print(" ELEVADO A ");
        Serial.print(potencia);
        Serial.print(" ES IGUAL A ");
        Serial.println(resultado);
    }
}

float CalculadoraPotencia::obtenerNumero() {
    while (!Serial.available()) {}
    return Serial.parseFloat();
}

int CalculadoraPotencia::obtenerPotencia() {
    while (!Serial.available()) {}
    return Serial.parseInt();
}