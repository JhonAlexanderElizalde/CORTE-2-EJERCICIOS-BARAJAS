//EL CODIGO TIENE UN MENU Y EN EL SE PUEDE INSERTA UN CARACTER, MOTRAR QUE HAY Y SALIR

#include <Arduino.h>
#include <VIDEO102.h>

ClaseProg prog(10); 

void setup() {
  Serial.begin(115200);  
  Serial.println("          ----->>MENU<<-----");  
  Serial.println("1. INSERTAR CARACTER EN LA COLA");  
  Serial.println("2. MOSTRAR TODOS LOS ELEMENTOS DE LA COLA");
  Serial.println("3. SALIR");
}

char elemento = '\0';  

void loop() {
  if (Serial.available() > 0) {
    char opcion = Serial.read();
    switch (opcion) {
      case '1':
        Serial.println("DIGITE EL CARACTER QUE QUIERE AGREGAR: ");
        while (Serial.available() == 0) {
       
        }
        elemento = Serial.read();  
        prog.insertarElemento(elemento);
        Serial.println("CARACTER INGRESADO\n");
        Serial.println("          ----->>MENU<<-----");  
        Serial.println("1. INSERTAR CARACTER EN LA COLA"); 
        Serial.println("2. MOSTRAR TODOS LOS ELEMENTOS DE LA COLA");
        Serial.println("3. SALIR");
        break;
      case '2':
        Serial.println("ELEMENTOS EN LA COLA: \n");
        prog.mostrarElementos();
        Serial.println("\n          ----->>MENU<<-----"); 
        Serial.println("1. INSERTAR CARACTER EN LA COLA");  
        Serial.println("2. MOSTRAR TODOS LOS ELEMENTOS DE LA COLA");
        Serial.println("3. SALIR");
        break;
      case '3':
        Serial.println("---->> SALIENDO...");
        exit(0);
        break;
      default:
        Serial.println("OPCION DIGITADA INVALIDA");
        Serial.println("\n          ----->>MENU<<-----");  
        Serial.println("1. INSERTAR CARACTER EN LA COLA"); 
        Serial.println("2. MOSTRAR TODOS LOS ELEMENTOS DE LA COLA");
        Serial.println("3. SALIR");
        break;
    }
  }
}
