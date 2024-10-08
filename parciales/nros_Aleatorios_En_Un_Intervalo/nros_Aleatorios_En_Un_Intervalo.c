//se generan aleatoriamente 3 numeros enteros mayores o iguales que 15 y menores o iguales a 85 
//diseñe un algoritmo que haga las siguentes tareas  a)calidad los datos generados (filtros)
//b)determinar cual de los 3 es el mayor, c) determinar cual de los 3 es el menor

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1, num2, num3;

    srand(time(0));

    // genera tres números aleatorios entre 15 y 85 (incluyéndolos)
    num1 = rand() % (85 - 15 + 1) + 15;
    num2 = rand() % (85 - 15 + 1) + 15;
    num3 = rand() % (85 - 15 + 1) + 15;

    // b) determinar cuál es el mayor de los tres números
    int mayor = num1;

    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }

    // c) determinar cuál es el menor de los tres números
    int menor = num1;

    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    // muestra los números generados
    printf("Los numeros generados son: %d, %d, %d\n", num1, num2, num3);
    printf("b) El numero mayor es: %d\n", mayor);
    printf("c) El numero menor es: %d\n", menor);

    return 0;
}
