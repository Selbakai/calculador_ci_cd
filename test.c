#include "include/operaciones_avanzadas.h"
#include "include/operaciones_basicas.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>


// Función auxiliar para comparar números flotantes
int comparar_flotantes(double a, double b, double tolerancia) {
  return fabs(a - b) < tolerancia;
}

// Tests para operaciones básicas
void test_operaciones_basicas() {
  printf("Ejecutando tests de operaciones básicas...\n");

  // Tests de suma
  assert(comparar_flotantes(sumar(2.0, 3.0), 5.0, 0.001));
  assert(comparar_flotantes(sumar(-2.0, 3.0), 1.0, 0.001));
  assert(comparar_flotantes(sumar(0.0, 0.0), 0.0, 0.001));

  // Tests de resta
  assert(comparar_flotantes(restar(5.0, 3.0), 2.0, 0.001));
  assert(comparar_flotantes(restar(-2.0, 3.0), -5.0, 0.001));
  assert(comparar_flotantes(restar(0.0, 0.0), 0.0, 0.001));

  // Tests de multiplicación
  assert(comparar_flotantes(multiplicar(3.0, 4.0), 12.0, 0.001));
  assert(comparar_flotantes(multiplicar(-2.0, 3.0), -6.0, 0.001));
  assert(comparar_flotantes(multiplicar(0.0, 5.0), 0.0, 0.001));

  // Tests de división
  assert(comparar_flotantes(dividir(12.0, 3.0), 4.0, 0.001));
  assert(comparar_flotantes(dividir(-6.0, 2.0), -3.0, 0.001));
  assert(comparar_flotantes(dividir(0.0, 5.0), 0.0, 0.001));

  printf("✅ Todos los tests de operaciones básicas pasaron!\n");
}

// Tests para operaciones avanzadas
void test_operaciones_avanzadas() {
  printf("Ejecutando tests de operaciones avanzadas...\n");

  // Tests de potencia
  assert(comparar_flotantes(potencia(2.0, 3.0), 8.0, 0.001));
  assert(comparar_flotantes(potencia(5.0, 0.0), 1.0, 0.001));
  assert(comparar_flotantes(potencia(3.0, 2.0), 9.0, 0.001));

  // Tests de raíz cuadrada
  assert(comparar_flotantes(raiz_cuadrada(9.0), 3.0, 0.001));
  assert(comparar_flotantes(raiz_cuadrada(16.0), 4.0, 0.001));
  assert(comparar_flotantes(raiz_cuadrada(0.0), 0.0, 0.001));

  // Tests de porcentaje
  assert(comparar_flotantes(porcentaje(100.0, 50.0), 50.0, 0.001));
  assert(comparar_flotantes(porcentaje(200.0, 25.0), 50.0, 0.001));
  assert(comparar_flotantes(porcentaje(80.0, 10.0), 8.0, 0.001));

  printf("✅ Todos los tests de operaciones avanzadas pasaron!\n");
}

int main() {
  printf("=== EJECUTANDO TESTS DE LA CALCULADORA ===\n\n");

  test_operaciones_basicas();
  printf("\n");
  test_operaciones_avanzadas();

  printf("\n🎉 ¡Todos los tests pasaron exitosamente!\n");
  printf("La calculadora está funcionando correctamente.\n");

  return 0;
}
