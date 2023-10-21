// ESTE VIDEO ERA CONCEPTO 
// EJEMPLO DE CADENA ANIDADA VIDEO ANTERIO

#include <Arduino.h>
#include <VIDEO57.h>

void setup() {
    Serial.begin(115200);
    while (!Serial);

    Serial.print("\nDIGITE LA CANTIDAD DE EMPLEADOS: ");
    while (!Serial.available()) {}
    int cantidadEmpleados = Serial.parseInt();

    Serial.println("\n\n--->REGISTRO DE EMPLEADOS<---");

    Empleado empleados[cantidadEmpleados];

    for (int i = 0; i < cantidadEmpleados; i++) {
        Serial.println("\nEMPLEADO NUMERO " + String(i + 1));
        empleados[i].ingresarDatos();
    }

    Serial.println("\n--->INFORMACION DE EMPLEADOS REGISTRADOS<---");
    for (int i = 0; i < cantidadEmpleados; i++) {
        Serial.println("\nEMPLEADO NUMERO " + String(i + 1));
        empleados[i].mostrarDatos();
    }
}

void loop() {

}