//Escriba un programa que solicite al usuario el ingreso de dos números, luego
//determine y muestre cuál es el mayor, o que muestre un mensaje en caso de ser
//iguales.

#include <stdio.h>

int main() {
    float num1, num2;
    
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    if(num1 > num2) {
        printf("El numero %.2f es mayor que %.2f\n", num1, num2);
    } else if (num1 < num2) {
        printf("El numero %.2f es mayor que %.2f\n", num2, num1);
    } else {
        printf("Los numeros son iguales\n");
    }
    return 0;
}
