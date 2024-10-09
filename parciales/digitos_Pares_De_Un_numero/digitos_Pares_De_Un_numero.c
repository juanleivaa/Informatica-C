//Resuelva el problema usando únicamente estructuras Combinadas:
//Escribir un programa que presente por pantalla la suma de los digitos pares, de un numero entero positivo ingresado por el usuario



#include <stdio.h>

int main() {

    int n1;

    // do-while para asegurarse de que el numero ingresado sea positivo
    do {
        printf("ingrese un numero entero positivo: ");
        scanf("%d", &n1);

        if (n1 <= 0) {
            printf("el numero ingresado no es positivo, intente nuevamente.\n");
        }
    } while (n1 <= 0);  // Si el numero no es positivo, sigue pidiendo uno nuevo.

    // Guardamos el numero original para poder usarlo en el mensaje final.
    int originalNum = n1;
    int digit, sum = 0;

    // El proceso se repetirá mientras el numero sea mayor que cero.
    do {
        // Obtenemos el último digito del numero.
        digit = n1 % 10;

        // Si el digito es par, lo sumamos a la variable sum.
        if (digit % 2 == 0) {
            sum = sum + digit;
        }

        // Eliminamos el último digito del numero.
        n1 = n1 / 10;
    } while (n1 > 0);  // condicion: sigue mientras haya digitos.

    printf("la suma de los digitos pares del numero %d es: %d\n", originalNum, sum);

    return 0;
}


