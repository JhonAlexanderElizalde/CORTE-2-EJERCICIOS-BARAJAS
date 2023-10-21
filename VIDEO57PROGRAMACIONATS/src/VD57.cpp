#include <VIDEO57.h>
#include <Arduino.h>

Empleado::Empleado() {
    salario = 0.0;
}

void Empleado::ingresarDatos() {
    Serial.println("\nDigite la dirección del empleado:");
    while (!Serial.available()) {}
    direccion.direccion = Serial.readStringUntil('\n');
    
    Serial.println("Digite la ciudad del empleado:");
    while (!Serial.available()) {}
    direccion.ciudad = Serial.readStringUntil('\n');
    
    Serial.println("Digite el barrio del empleado:");
    while (!Serial.available()) {}
    direccion.barrio = Serial.readStringUntil('\n');

    Serial.println("Digite el nombre del empleado:");
    while (!Serial.available()) {}
    nombre = Serial.readStringUntil('\n');
    
    Serial.println("Digite el salario del empleado:");
    while (!Serial.available()) {}
    salario = Serial.parseFloat();
}

void Empleado::mostrarDatos() {
    Serial.println("\nInformación del empleado:");
    Serial.print("Nombre: ");
    Serial.println(nombre);
    Serial.print("Dirección: ");
    Serial.println(direccion.direccion);
    Serial.print("Ciudad: ");
    Serial.println(direccion.ciudad);
    Serial.print("Barrio: ");
    Serial.println(direccion.barrio);
    Serial.print("Salario: $");
    Serial.println(salario, 2);
}