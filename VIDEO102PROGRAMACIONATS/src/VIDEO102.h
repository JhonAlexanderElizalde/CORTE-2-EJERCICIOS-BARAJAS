#include <Arduino.h>

class ClaseProg {
public:
  ClaseProg(int maxTam);    
  ~ClaseProg();             
  void insertarElemento(char elemento); 
  char eliminarElemento(); 
  bool estaVacia();         
  bool estaLlena();         
  void mostrarElementos();  
private:
  int frente, fin, tamano, tamanoMaximo;
  char* elementos;
};

