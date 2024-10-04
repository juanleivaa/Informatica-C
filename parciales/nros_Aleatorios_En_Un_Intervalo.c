//se generan aleatoriamente 3 numeros enteros mayores o iguales que 15 y menores o iguales a 85 
//diseñe un algoritmo que haga las siguentes tareas  a)calidad los datos generados (filtros)
//b)determinar cual de los 3 es el mayor, c) determinar cual de los 3 es el menor

#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    

int main() {
    int num1, num2, num3;
    
    srand(time(0));  

    //genera tres números aleatorios entre 15 y 85 (incluyendolos)
    num1 = rand() % (85 - 15 + 1) + 15;
    num2 = rand() % (85 - 15 + 1) + 15;
    num3 = rand() % (85 - 15 + 1) + 15;

    // muestra los numeros generados  los números generados
    printf("Los numeros generados son: %d, %d, %d\n", num1, num2, num3);

    // a) filtro: verificar si los números están en el rango de 15 a 85
    if (num1 >= 15 && num1 <= 85 && num2 >= 15 && num2 <= 85 && num3 >= 15 && num3 <= 85) {
        printf("a)num1, num2 y num3 estan dentro del rango [15, 85]\n");
    } else {
        printf("algun numero esta fuera del rango [15, 85]\n");
    }

    // b) determinar cual es el mayor de los tres numeros
    int mayor = num1;  // supongo que el mayor es 1

    if (num2 > mayor) {
        mayor = num2;  // si num2 es mayor, lo actualizamos
    }
    if (num3 > mayor) {
        mayor = num3;  // si num3 es mayor, lo actualizamos
    }

    printf("b) El numero mayor es: %d\n", mayor);

    // c) Determinar cual es el menor de los tres numeros
    int menor = num1;  // supongo que el mayor es 1

    if (num2 < menor) {
        menor = num2;  // si num2 es menor, lo actualizamos
    }
    if (num3 < menor) {
        menor = num3;  // si num3 es menor, lo actualizamos
    }

    printf("c) El numero menor es: %d\n", menor);

    return 0;
}
