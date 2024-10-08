#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializar la semilla para obtener números aleatorios
    srand(time(NULL));

    // Generar un número aleatorio de 4 dígitos entre 1000 y 9999
    int numero_original = 1000 + rand() % 9000;

    // Reemplazar la decena por 0
    int numero_modificado = (numero_original / 100) * 100;

    // Invertir el orden de los dígitos de par en par
    int numero_invertido = ((numero_modificado % 10) * 1000) + (((numero_modificado / 10) % 10) * 100) + (((numero_modificado / 1000) % 10) * 10) + ((numero_modificado / 10000) % 10);

    // Imprimir los resultados
    printf("Número original (N): %d\n", numero_original);
    printf("Número con la decena reemplazada por 0: %d\n", numero_modificado);
    printf("Número con el orden de los dígitos invertido de par en par: %d\n", numero_invertido);

    return 0;
}


