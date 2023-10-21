#include <VIDEO102.h>
#include <Arduino.h>

ClaseProg::ClaseProg(int maxTam) {
  tamanoMaximo = maxTam;   
  frente = tamano = 0;    
  fin = tamanoMaximo - 1;   
  elementos = new char[tamanoMaximo];  
}

ClaseProg::~ClaseProg() {
  delete[] elementos; 
}

void ClaseProg::insertarElemento(char elemento) {
  if (estaLlena()) {
    return; 
  }
  fin = (fin + 1) % tamanoMaximo; 
  elementos[fin] = elemento;    
  tamano++; 
}

char ClaseProg::eliminarElemento() {
  if (estaVacia()) {
    return '\0'; 
  }
  char elemento = elementos[frente];  
  frente = (frente + 1) % tamanoMaximo;  
  tamano--; 
  return elemento;  
}

bool ClaseProg::estaVacia() {
  return tamano == 0;  
}

bool ClaseProg::estaLlena() {
  return tamano == tamanoMaximo;  
}

void ClaseProg::mostrarElementos() {
    if (estaVacia()) {
    return; 
  }
  int i = frente;
  while (i != fin) {  
    Serial.println(elementos[i]); 
    i = (i + 1) % tamanoMaximo;  
}
Serial.println(elementos[fin]); 
}
  
