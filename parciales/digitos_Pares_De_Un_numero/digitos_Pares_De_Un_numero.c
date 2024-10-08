//Resuelva el problema usando únicamente estructuras Combinadas:
//Escribir un programa que presente por pantalla la suma de los digitos pares, de un numero entero positivo ingresado por el usuario


#include <stdio.h>

int main() {

    int n1;

    // le pedimos un numero entero al usuario
    printf("ingrese un numero entero positivo: ");
    scanf("%d", &n1);

    // verificamos si el numero es positivo
    if (n1 > 0) {
        //guardo el numero original para poder usarlo al final en el scanf sino se perdera
        int originalNum = n1;
        int digit, sum = 0;

        // el proceso se repetirá mientras el numero sea mayor que cero
        do {
            // obtenemos el último dígito del número
            digit = n1 % 10;

            // si el dígito es par, lo sumamos a la variable sum
            if (digit % 2 == 0) {
                sum = sum + digit;
            }

            // eliminamos el último dígito del número
            n1 = n1 / 10;
        } while (n1 > 0);  // Condición: sigue mientras haya dígitos.

        printf("la suma de los digitos pares del numero %d es: %d\n", originalNum, sum);

    } else {
        printf("el numero ingresado no es positivo.\n");
    }

    return 0;
}




