#include <Arduino.h>

struct UserData {
    char nombre[20];
    char apellido[20];
    int edad;
};

class estructuraPuntero {
public:
    estructuraPuntero(); 
    void ingresarDatos();
    void imprimirDatos();
private:
    UserData *datosUsuario;
};
