//pedir 3 numeros reales positivos , indicar si son lados de un triangulo rectangulo 
#include <stdio.h>
#include <math.h>  

int main() {
    float a, b, c;

    // pedir los lados
    printf("ingrese tres numeros reales positivos:\n");
    printf("lado 1: ");
    scanf("%f", &a);
    printf("lado 2: ");
    scanf("%f", &b);
    printf("lado 3: ");
    scanf("%f", &c);

    // verificar que los lados sean numeros positivos 
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("los numeros deben ser positivos.\n");
        return 1;
    }

    // determinar la hipotenusa y los catetos
    float hipotenusa, cat1, cat2;

    if (a >= b && a >= c) {      // si a es la hipotenusa
        hipotenusa = a;
        cat1 = b;
        cat2 = c;
    } else if (b >= a && b >= c) {  // si b es la hipotenusa
        hipotenusa = b;
        cat1 = a;
        cat2 = c;
    } else {  // si c es la hipotenusa
        hipotenusa = c;
        cat1 = a;
        cat2 = b;
    }

    //con la funcion pow, calculo el cuadrado de las variables y verifico el teorema de pitagoras
    if (pow(hipotenusa, 2) - (pow(cat1, 2) + pow(cat2, 2))) {
        printf("los numeros pueden formar un triangulo rectangulo.\n");
    } else {
        printf("los numeros no pueden formar un triangulo rectangulo.\n");
    }

    return 0;
}

