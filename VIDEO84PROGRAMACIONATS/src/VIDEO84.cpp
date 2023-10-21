//ejemplo de arreglos

#include <Arduino.h>
#include <VIDEO84.h>

arrays impresion; 

int arreglo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

void setup() {
    
}

void loop() {

  Serial.begin(115200);
  impresion.imprimirArray(arreglo, tamano);
  delay (3000);
}