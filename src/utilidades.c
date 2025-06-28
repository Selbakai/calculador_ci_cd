#include "../include/utilidades.h"
#include <stdio.h>
#include <stdlib.h>

void limpiar_pantalla(void) {
  system("cls"); // Para Windows
}

void mostrar_menu(void) {
  printf("\n========== CALCULADORA ==========\n");
  printf("1. Suma\n");
  printf("2. Resta\n");
  printf("3. Multiplicación\n");
  printf("4. División\n");
  printf("5. Potencia\n");
  printf("6. Raíz cuadrada\n");
  printf("7. Porcentaje\n");
  printf("8. Limpiar pantalla\n");
  printf("0. Salir\n");
  printf("================================\n");
  printf("Seleccione una opción: ");
}

int obtener_opcion(void) {
  int opcion;
  while (scanf("%d", &opcion) != 1) {
    printf("Entrada inválida. Por favor ingrese un número: ");
    while (getchar() != '\n')
      ; // Limpiar buffer
  }
  return opcion;
}

double obtener_numero(const char *mensaje) {
  double numero;
  printf("%s", mensaje);
  while (scanf("%lf", &numero) != 1) {
    printf("Entrada inválida. %s", mensaje);
    while (getchar() != '\n')
      ; // Limpiar buffer
  }
  return numero;
}
