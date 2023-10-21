#include <Arduino.h>

class MatrizClase {
public:
    MatrizClase(int size);
    ~MatrizClase();
    bool esSimetrica();
    void ingresarMatriz();
    void imprimirMatriz();
  
private:
    int** matriz;
    int size;
};