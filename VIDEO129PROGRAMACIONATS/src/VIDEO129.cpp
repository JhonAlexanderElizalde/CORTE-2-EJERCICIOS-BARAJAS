// EL CODIGO POR MEDIO DE UNA FUNCIONES MATEMATICAS CAMBIA EL ORDEN DE LA FECHA Y MUESTRA LE DE HOY Y LA FECHA DE AYER

#include <Arduino.h>
#include "VIDEO129.h"

Fecha fecha(20230823); 

void setup() {
  Serial.begin(115200);
  fecha.mostrarFecha(); 
  fecha.mostrarFechaAyer();  
}

void loop() {

}

