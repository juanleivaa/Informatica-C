//Resuelva el problema usando únicamente estructuras de repetición: Presentar por pantalla todos los 
//números pertenecientes a la serie de Fibonacci menores que un valor N ingresado.
#include <stdio.h>

int main() {
    int num1, a, b, c;
    //los dos primeros numeros de la serie de fibonacci
    a = 0;
    b = 1;

    printf("ingrese un numero ");
    scanf("%d", &num1);

    // mientras los numeros de la seria sean menor que el valor que se ingreso
    // se hace el calculo, donde c es una variable auxiliar que nos sirve para tomar 
    //el ultimo valor de la serie y luego asignarle ese valor a b
    while (a < num1) {
        printf("%d\n", a);
        c = a + b;   // c=0+1   // c=1+1    //c=1+2
        a = b;       // a=1     // a=1      //a=2
        b = c;       // b=1     // b=2      //b=3
    }

    return 0;
}

