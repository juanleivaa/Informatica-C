//fibonacci entre dos numeros ingresados 

#include <stdio.h>

int main() {
    int num1, num2, a, b, c;

    // control de los números ingresados con do-while
    do {
        printf("Ingrese el primer número (entre 1 y 100): ");
        scanf("%d", &num1);
        printf("Ingrese el segundo número (entre 1 y 100): ");
        scanf("%d", &num2);

        // verificar que ambos números estén entre 1 y 100 y que num1 sea menor o igual a num2
        if (num1 < 1 || num1 > 100 || num2 < 1 || num2 > 100 || num1 > num2) {
            printf("Los números deben estar entre 1 y 100 y el primero debe ser menor o igual al segundo. Intente nuevamente.\n");
        }
    } while (num1 < 1 || num1 > 100 || num2 < 1 || num2 > 100 || num1 > num2);

    // inicializar los dos primeros numeros de la serie de Fibonacci
    a = 0;
    b = 1;

    // generar y mostrar los numeros de Fibonacci entre num1 y num2
    while (a <= num2) {
        if (a >= num1) {
            printf("%d\n", a);  // mostrar el numero de la serie dentro del rango
        }
        // calcular el siguiente numero de la serie
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
