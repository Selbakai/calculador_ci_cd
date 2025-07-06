#include "test.h"

// Función auxiliar para comparar números flotantes
int comparar_flotantes(double a, double b, double tolerancia) {
  return fabs(a - b) < tolerancia;
}

// Tests para operaciones básicas
void test_operaciones_basicas(void) {
  TEST_INFO("Ejecutando tests de operaciones básicas...");

  // Tests de suma
  ASSERT_DOUBLE_EQ(sumar(2.0, 3.0), 5.0);
  ASSERT_DOUBLE_EQ(sumar(-2.0, 3.0), 1.0);
  ASSERT_DOUBLE_EQ(sumar(0.0, 0.0), 0.0);
  TEST_PASS("Tests de suma");

  // Tests de resta
  ASSERT_DOUBLE_EQ(restar(5.0, 3.0), 2.0);
  ASSERT_DOUBLE_EQ(restar(-2.0, 3.0), -5.0);
  ASSERT_DOUBLE_EQ(restar(0.0, 0.0), 0.0);
  TEST_PASS("Tests de resta");

  // Tests de multiplicación
  ASSERT_DOUBLE_EQ(multiplicar(3.0, 4.0), 10.0);
  ASSERT_DOUBLE_EQ(multiplicar(-2.0, 3.0), -6.0);
  ASSERT_DOUBLE_EQ(multiplicar(0.0, 5.0), 0.0);
  TEST_PASS("Tests de multiplicación");

  // Tests de división
  ASSERT_DOUBLE_EQ(dividir(12.0, 3.0), 4.0);
  ASSERT_DOUBLE_EQ(dividir(-6.0, 2.0), -3.0);
  ASSERT_DOUBLE_EQ(dividir(0.0, 5.0), 0.0);
  TEST_PASS("Tests de división");

  printf("✅ Todos los tests de operaciones básicas pasaron!\n");
}

// Tests para operaciones avanzadas
void test_operaciones_avanzadas(void) {
  TEST_INFO("Ejecutando tests de operaciones avanzadas...");

  // Tests de potencia
  ASSERT_DOUBLE_EQ(potencia(2.0, 3.0), 8.0);
  ASSERT_DOUBLE_EQ(potencia(5.0, 0.0), 1.0);
  ASSERT_DOUBLE_EQ(potencia(3.0, 2.0), 9.0);
  TEST_PASS("Tests de potencia");

  // Tests de raíz cuadrada
  ASSERT_DOUBLE_EQ(raiz_cuadrada(9.0), 3.0);
  ASSERT_DOUBLE_EQ(raiz_cuadrada(16.0), 4.0);
  ASSERT_DOUBLE_EQ(raiz_cuadrada(0.0), 0.0);
  TEST_PASS("Tests de raíz cuadrada");

  // Tests de porcentaje
  ASSERT_DOUBLE_EQ(porcentaje(100.0, 50.0), 50.0);
  ASSERT_DOUBLE_EQ(porcentaje(200.0, 25.0), 50.0);
  ASSERT_DOUBLE_EQ(porcentaje(80.0, 10.0), 8.0);
  TEST_PASS("Tests de porcentaje");

  printf("✅ Todos los tests de operaciones avanzadas pasaron!\n");
}

void ejecutar_todos_los_tests(void) {
  printf("=== EJECUTANDO TESTS DE LA CALCULADORA ===\n\n");

  test_operaciones_basicas();
  printf("\n");
  test_operaciones_avanzadas();

  printf("\n🎉 ¡Todos los tests pasaron exitosamente!\n");
  printf("La calculadora está funcionando correctamente.\n");
}

int main(void) {
  ejecutar_todos_los_tests();
  return 0;
}
