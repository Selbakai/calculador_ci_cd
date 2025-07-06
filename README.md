# Calculadora en C - Estructura Modular

Una calculadora completa implementada en C con arquitectura modular, separando cada funcionalidad en archivos independientes.

## 🏗️ Estructura del Proyecto

```text
calculador_ci_cd/
├── main.c                           # Punto de entrada principal
├── main.h                           # Header principal que incluye todos los módulos
├── CMakeLists.txt                   # Configuración de CMake
├── build.bat                        # Script de build automático
├── cmake_dev.bat                    # Script de comandos de desarrollo
├── README.md                        # Este archivo
├── CMAKE_GUIDE.md                   # Guía completa de CMake
├── include/                         # Archivos de cabecera (.h)
│   ├── operaciones_basicas.h        # Declaraciones de operaciones básicas
│   ├── operaciones_avanzadas.h      # Declaraciones de operaciones avanzadas
│   ├── utilidades.h                 # Declaraciones de funciones de utilidad
│   └── calculadora.h                # Declaración de la función principal
├── src/                             # Archivos de implementación (.c)
│   ├── operaciones_basicas.c        # Implementación de suma, resta, multiplicación, división
│   ├── operaciones_avanzadas.c      # Implementación de potencia, raíz cuadrada, porcentaje
│   ├── utilidades.c                 # Funciones de interfaz y entrada de datos
│   └── calculadora.c                # Lógica principal de la calculadora
├── test/                            # Directorio de tests
│   ├── test.h                       # Header para tests con macros y declaraciones
│   └── test.c                       # Tests unitarios
└── build/                           # Directorio de compilación (generado por CMake)
    ├── calculadora.exe              # Ejecutable principal
    └── test_calculadora.exe         # Ejecutable de tests
```

## ✨ Características

### Operaciones Básicas
- ➕ Suma
- ➖ Resta
- ✖️ Multiplicación
- ➗ División (con validación de división por cero)

### Operaciones Avanzadas
- 🔢 Potencia
- √ Raíz cuadrada (con validación de números negativos)
- 📊 Cálculo de porcentajes

### Funciones de Utilidad
- 🖥️ Menú interactivo
- 🧹 Limpieza de pantalla
- ✅ Validación de entrada de datos
- 🔄 Bucle principal de ejecución

## 🛠️ Compilación y Ejecución

### Prerrequisitos

- Compilador GCC
- CMake (versión 3.10 o superior)
- Make o MinGW (para Windows)

### Usando CMake

#### Compilación Automática
```cmd
# Ejecutar script de build completo
build.bat
```

#### Compilación Manual
```cmd
# Configurar el proyecto
cmake -B build -G "MinGW Makefiles"

# Compilar
cmake --build build

# Ejecutar tests
cd build && ctest --verbose

# Ejecutar calculadora
build\calculadora.exe
```

#### Comandos de Desarrollo
```cmd
# Configurar proyecto
cmake_dev.bat configure

# Compilar
cmake_dev.bat build

# Ejecutar tests
cmake_dev.bat test

# Ejecutar calculadora
cmake_dev.bat run

# Limpiar
cmake_dev.bat clean

# Reconstruir todo
cmake_dev.bat rebuild

# Ver ayuda
cmake_dev.bat help
```

## 📋 Uso

1. Ejecuta el programa
2. Selecciona una opción del menú (1-8)
3. Ingresa los números cuando se te solicite
4. Ve el resultado
5. Presiona Enter para continuar
6. Selecciona 0 para salir

## 🏗️ Arquitectura Modular

### Ventajas de la Estructura Modular

1. **Separación de Responsabilidades**: Cada archivo tiene una función específica
2. **Mantenibilidad**: Fácil modificar o extender funcionalidades específicas
3. **Reutilización**: Los módulos pueden ser reutilizados en otros proyectos
4. **Compilación Incremental**: Solo se recompilan los archivos modificados
5. **Legibilidad**: Código más organizado y fácil de entender
6. **Colaboración**: Múltiples desarrolladores pueden trabajar en diferentes módulos

### Descripción de Módulos

#### `operaciones_basicas.c/.h`
Contiene las cuatro operaciones matemáticas fundamentales con validaciones apropiadas.

#### `operaciones_avanzadas.c/.h`
Implementa operaciones más complejas que requieren la librería math.h.

#### `utilidades.c/.h`
Maneja la interfaz de usuario, validación de entrada y funciones auxiliares.

#### `calculadora.c/.h`
Contiene la lógica principal que coordina todos los módulos y maneja el flujo del programa.

## 🔧 Personalización

Para agregar nuevas operaciones:

1. Añade la declaración en el header correspondiente (`include/`)
2. Implementa la función en el archivo source correspondiente (`src/`)
3. Agrega la opción en el menú (`src/utilidades.c`)
4. Añade el case en el switch (`src/calculadora.c`)
5. Actualiza el Makefile si es necesario

## 📝 Notas de Desarrollo

- Compilado con estándar C99
- Utiliza `-Wall -Wextra` para warnings estrictos
- Requiere enlazado con librería math (`-lm`)
- Compatible con sistemas Windows y Unix
- Validación robusta de entrada de datos
- Manejo de errores matemáticos (división por cero, raíz de negativos)

## 📄 Licencia

Este proyecto está disponible bajo licencia libre para fines educativos y de aprendizaje.
