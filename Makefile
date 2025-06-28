# Makefile para la Calculadora en C (Estructura Modular)
CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -Iinclude
LIBS = -lm

# Directorios
SRCDIR = src
INCDIR = include

# Archivos fuente
SOURCES = main.c $(SRCDIR)/operaciones_basicas.c $(SRCDIR)/operaciones_avanzadas.c $(SRCDIR)/utilidades.c $(SRCDIR)/calculadora.c
TEST_SOURCES = test.c $(SRCDIR)/operaciones_basicas.c $(SRCDIR)/operaciones_avanzadas.c
OBJECTS = $(SOURCES:.c=.o)
TEST_OBJECTS = $(TEST_SOURCES:.c=.o)
TARGET = calculadora
TEST_TARGET = test_calculadora

# Regla por defecto
all: $(TARGET)

# Compilar el programa principal
$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) $(LIBS) -o $(TARGET)

# Compilar los tests
$(TEST_TARGET): $(TEST_OBJECTS)
	$(CC) $(TEST_OBJECTS) $(LIBS) -o $(TEST_TARGET)

# Compilar archivos objeto individuales
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Dependencias específicas
main.o: main.c $(INCDIR)/calculadora.h
test.o: test.c $(INCDIR)/operaciones_basicas.h $(INCDIR)/operaciones_avanzadas.h
$(SRCDIR)/operaciones_basicas.o: $(SRCDIR)/operaciones_basicas.c $(INCDIR)/operaciones_basicas.h
$(SRCDIR)/operaciones_avanzadas.o: $(SRCDIR)/operaciones_avanzadas.c $(INCDIR)/operaciones_avanzadas.h
$(SRCDIR)/utilidades.o: $(SRCDIR)/utilidades.c $(INCDIR)/utilidades.h
$(SRCDIR)/calculadora.o: $(SRCDIR)/calculadora.c $(INCDIR)/calculadora.h $(INCDIR)/operaciones_basicas.h $(INCDIR)/operaciones_avanzadas.h $(INCDIR)/utilidades.h

# Ejecutar el programa
run: $(TARGET)
	./$(TARGET)

# Ejecutar tests
test: $(TEST_TARGET)
	./$(TEST_TARGET)

# Compilar y ejecutar tests
check: test
	@echo "Tests completados."

# Limpiar archivos compilados
clean:
	del *.o
	del $(SRCDIR)\*.o
	del $(TARGET).exe
	del $(TEST_TARGET).exe

# Compilar en modo debug
debug: CFLAGS += -g -DDEBUG
debug: $(TARGET)

# Mostrar estructura del proyecto
info:
	@echo "=== Calculadora en C - Estructura Modular ==="
	@echo "Archivos fuente:"
	@echo "  main.c"
	@echo "  src/operaciones_basicas.c"
	@echo "  src/operaciones_avanzadas.c"
	@echo "  src/utilidades.c"
	@echo "  src/calculadora.c"
	@echo "  test.c"
	@echo ""
	@echo "Headers:"
	@echo "  include/operaciones_basicas.h"
	@echo "  include/operaciones_avanzadas.h"
	@echo "  include/utilidades.h"
	@echo "  include/calculadora.h"
	@echo ""
	@echo "Ejecutables:"
	@echo "  $(TARGET) - Programa principal"
	@echo "  $(TEST_TARGET) - Tests unitarios"

# Mostrar ayuda
help:
	@echo "Opciones disponibles:"
	@echo "  make         - Compilar el programa"
	@echo "  make run     - Compilar y ejecutar"
	@echo "  make test    - Compilar y ejecutar tests"
	@echo "  make check   - Alias para make test"
	@echo "  make clean   - Limpiar archivos compilados"
	@echo "  make debug   - Compilar en modo debug"
	@echo "  make info    - Mostrar estructura del proyecto"
	@echo "  make help    - Mostrar esta ayuda"

.PHONY: all run test check clean debug info help
