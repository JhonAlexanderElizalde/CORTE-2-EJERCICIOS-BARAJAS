//VECTORES EN ORDEN DE 1 A 10

#include <Arduino.h>

void setup() {
  Serial.begin(115200); 
  while (!Serial);    

  int vectorejemplo[10] = {354, 27, 65, 58, 39, 125, 146, 23, 8, 366};

  Serial.println("Contenido del vector:\n");
  for (int i = 0; i < 10; i++) {
    Serial.print("Posición ");
    Serial.print(i);
    Serial.print(": ");
    Serial.println(vectorejemplo[i]);
    delay(1000);
  }
}

void loop() {
}