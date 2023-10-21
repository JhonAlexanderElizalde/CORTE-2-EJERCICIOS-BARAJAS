#include <VIDEO3.h>
#include <Arduino.h>

TomaDeNumero::TomaDeNumero(){
    Serial.begin(115200);
    while (!Serial);
}
void TomaDeNumero::digitarnumero() {
    Serial.println("\n\nDIGITE UN NUMERO: ");
    while (!Serial.available());
    n = Serial.parseInt();
}

void TomaDeNumero::salida(){
    Serial.print("\nEL NUMERO DIGITADO FUE: ");
    Serial.println(n);
}