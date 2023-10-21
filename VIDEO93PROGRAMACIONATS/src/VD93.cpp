#include <VIDEO93.h>
#include <Arduino.h>

estructuraPuntero::estructuraPuntero() {
    datosUsuario = new UserData; 
}

void estructuraPuntero::ingresarDatos() {
    Serial.println("Ingrese el nombre:");
    while (!Serial.available()) {
    }
    Serial.readBytesUntil('\n', datosUsuario->nombre, sizeof(datosUsuario->nombre));
    datosUsuario->nombre[strcspn(datosUsuario->nombre, "\r\n")] = '\0'; 

    Serial.println("Ingrese el apellido:");
    while (!Serial.available()) {
    }
    Serial.readBytesUntil('\n', datosUsuario->apellido, sizeof(datosUsuario->apellido));
    datosUsuario->apellido[strcspn(datosUsuario->apellido, "\r\n")] = '\0';

    Serial.println("Ingrese la edad:");
    while (!Serial.available()) {
    }
    datosUsuario->edad = Serial.parseInt();
}

void estructuraPuntero::imprimirDatos() {
    Serial.print("Nombre: ");
    Serial.println(datosUsuario->nombre);
    Serial.print("Apellido: ");
    Serial.println(datosUsuario->apellido);
    Serial.print("Edad: ");
    Serial.println(datosUsuario->edad);
}