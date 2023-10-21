#include <VIDEO129.h>
#include <Arduino.h>

Fecha::Fecha(int dia, int mes, int anio) {
  this->dia = dia;
  this->mes = mes;
  this->anio = anio;
}

Fecha::Fecha(long fechaNumerica) {
  anio = fechaNumerica / 10000;
  mes = (fechaNumerica % 10000) / 100;
  dia = fechaNumerica % 100;
}

void Fecha::mostrarFecha() {
  Serial.print("Fecha hoy: ");
  Serial.print(dia);
  Serial.print("/");
  Serial.print(mes);
  Serial.print("/");
  Serial.println(anio);
}

void Fecha::mostrarFechaAyer() {
  dia--;
  if (dia < 1) {
    mes--;
    if (mes < 1) {
      anio--;
      mes = 12;
    }
    dia = 31;
  }
  Serial.print("Fecha ayer: ");
  Serial.print(dia);
  Serial.print("/");
  Serial.print(mes);
  Serial.print("/");
  Serial.println(anio);
}