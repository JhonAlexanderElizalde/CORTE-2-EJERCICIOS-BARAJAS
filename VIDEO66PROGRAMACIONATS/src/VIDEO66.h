#include <Arduino.h>

class CalculadoraPotencia {
public:
    CalculadoraPotencia();
    void ejecutar();
private:
    float obtenerNumero();
    int obtenerPotencia();
};
