@echo off
echo =============================================
echo    EJECUTANDO TESTS DE LA CALCULADORA
echo =============================================
echo.

test_calculadora.exe
if %ERRORLEVEL% EQU 0 (
    echo.
    echo =============================================
    echo    TESTS COMPLETADOS EXITOSAMENTE
    echo =============================================
) else (
    echo.
    echo =============================================
    echo    ERROR EN LOS TESTS: %ERRORLEVEL%
    echo =============================================
)

echo.
echo =============================================
echo    EJECUTANDO CALCULADORA PRINCIPAL
echo =============================================
echo.
echo Presiona cualquier tecla para ejecutar la calculadora...
pause > nul

calculadora.exe

echo.
echo =============================================
echo    PROGRAMA TERMINADO
echo =============================================
pause
