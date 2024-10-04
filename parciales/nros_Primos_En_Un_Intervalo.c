//Se pide que se ingresen dos numeros enteros y positivos 
//y se encuntren los numero primos comprendidos entres ellos
//incluyendo a ambos 



//Dados dos números enteros positivos, presentar por pantalla si el primer número 
//ingresado es múltiplo del segundo número. 

#include <stdio.h>

#include <stdio.h>

int main()
{
    float X1f, X2f;  // se declaran como float para hacer el filtro de enteros
    int X1, X2, i, j, divi;
    float dif1, dif2;

    // filtrar que X1 y X2 sean números enteros positivos y que X1 sea menor que X2
    do
    {
        printf("Ingrese X1 (EXTREMO IZQ): ");
        scanf("%f", &X1f);  
        printf("Ingrese X2 (EXTREMO DER.): ");
        scanf("%f", &X2f);  

        // convierto los numeros flotantes a enteros
        X1 = (int)X1f;
        X2 = (int)X2f;

        // calculo las diferencias entre los numeros ingresados y los enteros
        dif1 = X1f - (float)X1;
        dif2 = X2f - (float)X2;

        // verifico si ambos números son enteros y positivos, y si X1 es menor que X2
        //para que sean enteros la diferencia debe ser 0
        if (dif1 != 0 || dif2 != 0 || X1 <= 0 || X2 <= 0 || X1 >= X2)
        {
            printf("los numeros deben ser enteros positivos y ademas el extremo izquierdo debe ser menor que el extremo derecho\n");
        }
        
    } while (dif1 != 0 || dif2 != 0 || X1 <= 0 || X2 <= 0 || X1 >= X2);  // si no son válidos, volvemos a pedir los números

    // Inicialización - condición - incremento
    // j empieza en X1 y se le sumará 1 hasta que sea menor o igual a X2 
    // (es decir, recorre todos los valores desde X1 hasta X2)
    for (j = X1; j <= X2; j++) {
        divi = 0; // Es un contador de divisores

        // i empezará en 1 y recorrerá los valores de 1 hasta j
        // es decir, si j = 4, entonces i = 1, i = 2, i = 3, i = 4
        for (i = 1; i <= j; i++) {
            // Si la división entre j e i no tiene resto, entonces lo sumamos al divi
            if (j % i == 0) {
                divi++;
            }
        }

        // Si divi = 2 quiere decir que el número es divisible por 1 y por sí mismo
        // es decir, es primo 
        if (divi == 2) {
            printf("%d es primo\n", j);
        }
        // si no, no se imprime nada (no es primo)
    }

    return 0;
}
