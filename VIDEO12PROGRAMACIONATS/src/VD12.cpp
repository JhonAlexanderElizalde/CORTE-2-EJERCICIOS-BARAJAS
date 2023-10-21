#include <VIDEO12.h>
#include <Arduino.h>

NumeroDigitado::NumeroDigitado() {
  Serial.begin(115200);
  while (!Serial);
}

void NumeroDigitado::pedirNumero() {
  Serial.println("\n\nDIGITE UN NUMERO QUE ESTE ENTRE 1-5: ");
  while (!Serial.available());
  numero = Serial.parseInt();
}

void NumeroDigitado::Numero() {
  switch (numero) {
    case 1:
      Serial.println("\nUSTED DIGITO EL NUMERO UNO (1) - GRACIAS.");
      break;
    case 2:
      Serial.println("\nUSTED DIGITO EL NUMERO DOS (2) - GRACIAS.");
      break;
    case 3:
      Serial.println("\nUSTED DIGITO EL NUMERO TRES (3) - GRACIAS.");
      break;
    case 4:
      Serial.println("\nUSTED DIGITO EL NUMERO CUATRO (4) - GRACIAS.");
      break;
    case 5:
      Serial.println("\nUSTED DIGITO EL NUMERO CINCO (5) - GRACIAS.");
      break;
    default:
      Serial.println("\nEL NUMERO DIGITADO NO ESTA EN EL RANGO DE 1-5 - INTENTE DE NUEVO");
      break;
  }
}