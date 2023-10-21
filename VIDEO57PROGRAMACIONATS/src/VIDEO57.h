#include <Arduino.h>

class Direccion {
public:
    String direccion;
    String ciudad;
    String barrio;
};

class Empleado {
public:
    String nombre;
    Direccion direccion;
    float salario;

    Empleado();
    void ingresarDatos();
    void mostrarDatos();
};
