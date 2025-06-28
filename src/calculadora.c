#include "../include/calculadora.h"
#include "../include/operaciones_avanzadas.h"
#include "../include/operaciones_basicas.h"
#include "../include/utilidades.h"
#include <stdio.h>


void ejecutar_calculadora(void) {
  int opcion;
  double num1, num2, resultado;

  printf("¡Bienvenido a la Calculadora!\n");

  do {
    mostrar_menu();
    opcion = obtener_opcion();

    switch (opcion) {
    case 1: // Suma
      num1 = obtener_numero("Ingrese el primer número: ");
      num2 = obtener_numero("Ingrese el segundo número: ");
      resultado = sumar(num1, num2);
      printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
      break;

    case 2: // Resta
      num1 = obtener_numero("Ingrese el primer número: ");
      num2 = obtener_numero("Ingrese el segundo número: ");
      resultado = restar(num1, num2);
      printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
      break;

    case 3: // Multiplicación
      num1 = obtener_numero("Ingrese el primer número: ");
      num2 = obtener_numero("Ingrese el segundo número: ");
      resultado = multiplicar(num1, num2);
      printf("Resultado: %.2f × %.2f = %.2f\n", num1, num2, resultado);
      break;

    case 4: // División
      num1 = obtener_numero("Ingrese el dividendo: ");
      num2 = obtener_numero("Ingrese el divisor: ");
      resultado = dividir(num1, num2);
      if (num2 != 0) {
        printf("Resultado: %.2f ÷ %.2f = %.2f\n", num1, num2, resultado);
      }
      break;

    case 5: // Potencia
      num1 = obtener_numero("Ingrese la base: ");
      num2 = obtener_numero("Ingrese el exponente: ");
      resultado = potencia(num1, num2);
      printf("Resultado: %.2f^%.2f = %.2f\n", num1, num2, resultado);
      break;

    case 6: // Raíz cuadrada
      num1 = obtener_numero("Ingrese el número: ");
      resultado = raiz_cuadrada(num1);
      if (num1 >= 0) {
        printf("Resultado: √%.2f = %.2f\n", num1, resultado);
      }
      break;

    case 7: // Porcentaje
      num1 = obtener_numero("Ingrese el número base: ");
      num2 = obtener_numero("Ingrese el porcentaje: ");
      resultado = porcentaje(num1, num2);
      printf("Resultado: %.2f%% de %.2f = %.2f\n", num2, num1, resultado);
      break;

    case 8: // Limpiar pantalla
      limpiar_pantalla();
      break;

    case 0: // Salir
      printf("¡Gracias por usar la calculadora!\n");
      break;

    default:
      printf("Opción inválida. Por favor seleccione una opción válida.\n");
      break;
    }

    if (opcion != 0 && opcion != 8) {
      printf("\nPresione Enter para continuar...");
      getchar(); // Capturar el enter pendiente
      getchar(); // Esperar a que el usuario presione enter
    }

  } while (opcion != 0);
}
