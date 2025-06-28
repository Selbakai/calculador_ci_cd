#include "../include/operaciones_basicas.h"
#include <stdio.h>

double sumar(double a, double b) { return a + b; }

double restar(double a, double b) { return a - b; }

double multiplicar(double a, double b) { return a * b; }

double dividir(double a, double b) {
  if (b == 0) {
    printf("Error: División por cero no permitida.\n");
    return 0;
  }
  return a / b;
}
