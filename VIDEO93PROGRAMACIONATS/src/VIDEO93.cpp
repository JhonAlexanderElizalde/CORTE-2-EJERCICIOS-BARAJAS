//ESTRUCTURAS QUE PIDE LA CANTIDAD DE EMPLEADOS

#include <Arduino.h>
#include <VIDEO93.h>

estructuraPuntero impresion; 

void setup() {
    Serial.begin(115200);
    
}

void loop() {
    impresion.ingresarDatos();
    impresion.imprimirDatos();
    delay (5000);
}