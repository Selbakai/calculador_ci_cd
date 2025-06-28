#include "../include/operaciones_avanzadas.h"
#include <math.h>
#include <stdio.h>


double potencia(double base, double exponente) { return pow(base, exponente); }

double raiz_cuadrada(double numero) {
  if (numero < 0) {
    printf("Error: No se puede calcular la raíz cuadrada de un número "
           "negativo.\n");
    return 0;
  }
  return sqrt(numero);
}

double porcentaje(double numero, double porcentaje) {
  return (numero * porcentaje) / 100.0;
}
