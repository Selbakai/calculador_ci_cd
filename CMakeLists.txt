cmake_minimum_required(VERSION 3.10)

project(CalculadoraCI_CD LANGUAGES C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(include)

set(SOURCES
    main.c
    src/operaciones_basicas.c
    src/operaciones_avanzadas.c
    src/utilidades.c
    src/calculadora.c
)

add_executable(calculadora ${SOURCES})

# Enlazar math si no es Windows
if(NOT WIN32)
    target_link_libraries(calculadora m)
endif()

# Ruta de salida personalizada
set_target_properties(calculadora PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/bin/Debug
    RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/bin/Release
)

# Ruta fija del ejecutable para ejecutar en Windows Debug
set(EXECUTABLE_PATH "${CMAKE_BINARY_DIR}/bin/Debug/calculadora.exe")

# Target separado para ejecutar
add_custom_target(run
    COMMAND cmd /c "start /wait \"\" \"${EXECUTABLE_PATH}\""
    DEPENDS calculadora
    COMMENT "Ejecutando calculadora"
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)

