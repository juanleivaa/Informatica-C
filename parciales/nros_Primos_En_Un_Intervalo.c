//Se pide que se ingresen dos numeros enteros y positivos 
//y se encuntren los numero primos comprendidos entres ellos
//incluyendo a ambos 
#include <stdio.h>

int main() {

    int X1, X2, i, j, divi;
    float X1f , X2f;

    // filtrar que X1 y X2 sean numeros enteros positivos y que X1 sea menor que X2
    do {
        printf("Ingrese X1 (EXTREMO IZQ): ");
        scanf("%f", &X1f);  
        fflush(stdin);
        printf("Ingrese X2 (EXTREMO DER.): ");
        scanf("%f", &X2f);  

        // convierto los numeros flotantes a enteros
        X1=X1f;
        X2=X2f;

        // verifico que ambos numeros sean positivos y que X1 sea menor que X2
        if (X1 <= 0 || X2 <= 0 || X1 >= X2) {
            printf("los numeros deben ser enteros positivos y ademas el extremo izquierdo debe ser menor que el extremo derecho.\n");
        }
        
    } while ( X1 <= 0 || X2 <= 0 || X1 >= X2);  // si no son válidos, volvemos a pedir los numeros


    // Inicialización - condición - incremento
    // j empieza en X1 y se le sumará 1 hasta que sea menor o igual a X2 
    // (es decir, recorre todos los valores desde X1 hasta X2)
    for (j = X1; j <= X2; j++) {
        divi = 0; // es un contador de divisores


        // i empezara en 1 y recorrera los valores de 1 hasta j
        // es decir, si j = 4, entonces i = 1, i = 2, i = 3, i = 4
        for (i = 1; i <= j; i++) {
            //si la división entre j e i no tiene resto, entonces lo sumamos al divi
            if (j % i == 0) {
                divi++;
            }
        }

        // si divi = 2, el numero es primo
        if (divi <= 2) {
            printf("%d es primo\n", j);
        }
    }

    return 0;
}
