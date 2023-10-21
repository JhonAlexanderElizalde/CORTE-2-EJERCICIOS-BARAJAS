#include <Arduino.h>
#include <VIDEO84.h>

arrays::arrays() {
   
}

void arrays::imprimirArray(int *arreglo, int size) {
    Serial.println("\nVECTOR\tNUMERO\n");
    for (int i = 0; i < size; i++) {
        Serial.print("[" + String(i) + "]\t[" + String(arreglo[i]) + "]\n");
    }
}