#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializar la semilla para obtener n�meros aleatorios
    srand(time(NULL));

    // Generar un n�mero aleatorio de 4 d�gitos entre 1000 y 9999
    int numero_original = 1000 + rand() % 9000;

    // Reemplazar la decena por 0
    int numero_modificado = (numero_original / 100) * 100;

    // Invertir el orden de los d�gitos de par en par
    int numero_invertido = ((numero_modificado % 10) * 1000) + (((numero_modificado / 10) % 10) * 100) + (((numero_modificado / 1000) % 10) * 10) + ((numero_modificado / 10000) % 10);

    // Imprimir los resultados
    printf("N�mero original (N): %d\n", numero_original);
    printf("N�mero con la decena reemplazada por 0: %d\n", numero_modificado);
    printf("N�mero con el orden de los d�gitos invertido de par en par: %d\n", numero_invertido);

    return 0;
}


