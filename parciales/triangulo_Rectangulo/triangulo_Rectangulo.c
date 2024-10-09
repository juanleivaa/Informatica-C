//pedir 3 numeros reales positivos , indicar si son lados de un triangulo rectangulo 


#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    // Pedir los lados hasta que sean positivos
    do {
        printf("Ingrese tres numeros reales positivos:\n");
        printf("lado 1: ");
        scanf("%f", &a);
        printf("lado 2: ");
        scanf("%f", &b);
        printf("lado 3: ");
        scanf("%f", &c);
        
        if (a <= 0 || b <= 0 || c <= 0) {
            printf("Los numeros deben ser positivos. Intente nuevamente.\n");
        }
    } while (a <= 0 || b <= 0 || c <= 0);

    // Determinar la hipotenusa y los catetos
    float hip, cat1, cat2;

    if (a >= b && a >= c) {      // si a es la hipotenusa
        hip = a;
        cat1 = b;
        cat2 = c;
    } else if (b >= a && b >= c) {  // si b es la hipotenusa
        hip = b;
        cat1 = a;
        cat2 = c;
    } else {  // si c es la hipotenusa
        hip = c;
        cat1 = a;
        cat2 = b;
    }

    // Verificar el teorema de Pitágoras
    if (pow(hip, 2) == (pow(cat1, 2) + pow(cat2, 2))) {
        printf("Los numeros pueden formar un triangulo rectangulo.\n");
    } else {
        printf("Los numeros no pueden formar un triangulo rectangulo.\n");
    }

    return 0;
}





/*
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
    }

    // determinar la hipotenusa y los catetos
    float hip, cat1, cat2;

    if (a >= b && a >= c) {      // si a es la hipotenusa
        hip = a;
        cat1 = b;
        cat2 = c;
    } else if (b >= a && b >= c) {  // si b es la hipotenusa
        hip = b;
        cat1 = a;
        cat2 = c;
    } else {  // si c es la hipotenusa
        hip = c;
        cat1 = a;
        cat2 = b;
    }

    //con la funcion pow, calculo el cuadrado de las variables y verifico el teorema de pitagoras
    if (pow(hip, 2) == (pow(cat1, 2) + pow(cat2, 2))) {
        printf("los numeros pueden formar un triangulo rectangulo.\n");
    } else {
        printf("los numeros no pueden formar un triangulo rectangulo.\n");
    }

    return 0;
}

*/