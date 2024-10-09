//Resuelva el problema usando únicamente estructuras de repetición: Presentar por pantalla todos los 
//numeros pertenecientes a la serie de Fibonacci menores que un valor N ingresado.

#include <stdio.h>

int main() {
    int num1, a, b, c;

    // do-while para asegurarse de que el numero ingresado no sea negativo
    do {
        printf("Ingrese un numero mayor o igual a 0: ");
        scanf("%d", &num1);

        if (num1 < 0) {
            printf("El numero debe ser mayor o igual a 0, intente nuevamente.\n");
        }
    } while (num1 < 0);  // si el numero es negativo, sigue pidiendo uno valido.

    //los dos primeros numeros de la serie de fibonacci
    a = 0;
    b = 1;

    // mientras los numeros de la seria sean menor que el valor que se ingreso
    // se hace el calculo, donde c es una variable auxiliar que nos sirve para tomar 
    //el ultimo valor de la serie y luego asignarle ese valor a b
    while (a < num1) {
        printf("%d\n", a);  // presento el numero de la serie

        // Calculamos el siguiente numero de la serie
        c = a + b;
        a = b;  // asignamos a `a` el valor de `b`
        b = c;  // asignamos a `b` el valor de `c`
    }

    // si el numero ingresado es 0, también mostramos el 0 como parte de la serie
    if (num1 == 0) {
        printf("0\n");
    }

    return 0;
}
