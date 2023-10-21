#include <Arduino.h>

class Fecha {
public:
  Fecha(int dia, int mes, int anio);  
  Fecha(long fechaNumerica);  
  void mostrarFecha();
  void mostrarFechaAyer();
private:
  int dia;
  int mes;
  int anio;
};