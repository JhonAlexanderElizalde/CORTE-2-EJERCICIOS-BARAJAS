#include <Arduino.h>

class MatrizCuadrada {
public:
    MatrizCuadrada();
    void ejecutar();
private:
    int obtenerDimension();
    void ingresarMatriz(int dimension, int matriz[][5]);
    void elevarAlCuadrado(int dimension, int matriz[][5], int matrizCuadrada[][5]);
    void mostrarMatriz(int dimension, int matriz[][5]);
};
