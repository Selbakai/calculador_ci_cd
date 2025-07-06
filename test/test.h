#ifndef TEST_H
#define TEST_H

#include <assert.h>
#include <math.h>
#include <stdio.h>


// Incluir los headers de la calculadora
#include "../include/operaciones_avanzadas.h"
#include "../include/operaciones_basicas.h"


// Declaraciones de funciones de test
int comparar_flotantes(double a, double b, double tolerancia);
void test_operaciones_basicas(void);
void test_operaciones_avanzadas(void);
void ejecutar_todos_los_tests(void);

// Macros para tests
#define TOLERANCIA_DEFAULT 0.001
#define ASSERT_DOUBLE_EQ(actual, expected)                                     \
  assert(comparar_flotantes((actual), (expected), TOLERANCIA_DEFAULT))

// Colores para output (opcional, para Windows)
#ifdef _WIN32
#define COLOR_VERDE ""
#define COLOR_ROJO ""
#define COLOR_AMARILLO ""
#define COLOR_RESET ""
#else
#define COLOR_VERDE "\033[32m"
#define COLOR_ROJO "\033[31m"
#define COLOR_AMARILLO "\033[33m"
#define COLOR_RESET "\033[0m"
#endif

// Macros para mensajes de test
#define TEST_PASS(mensaje)                                                     \
  printf(COLOR_VERDE "✅ PASS: %s" COLOR_RESET "\n", mensaje)
#define TEST_FAIL(mensaje)                                                     \
  printf(COLOR_ROJO "❌ FAIL: %s" COLOR_RESET "\n", mensaje)
#define TEST_INFO(mensaje)                                                     \
  printf(COLOR_AMARILLO "ℹ️  INFO: %s" COLOR_RESET "\n", mensaje)

#endif // TEST_H