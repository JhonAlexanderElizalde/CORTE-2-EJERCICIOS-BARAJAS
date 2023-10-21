//IMPRIMIR NUMEROS DEL 1 AL 10

#include <Arduino.h>

void setup() {
  Serial.begin(115200); 
  while (!Serial);    
}

void loop() {

  for (int i = 1; i <= 10; i++) {
    Serial.print("Número: ");
    Serial.println(i);
    delay(500); 
  }

  delay(3000);
  Serial.print("\n");
}



