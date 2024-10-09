//ingresar un numero natural y presentar por pantalla si el numero es par , no puede usar ni mod ni div 

#include <stdio.h>

int main() {
    int numero;

    // do-while para asegurarse de que el número ingresado sea natural (mayor o igual a 0)
    do {
        printf("Ingrese un numero natural (>= 0): ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("El numero ingresado no es natural, intente nuevamente.\n");
        }
    } while (numero < 0);  // Si el número no es natural, sigue pidiendo un nuevo número.

    // Comprobacion para ver si el numero es par;
    // Mientras que el numero sea mayor o igual a 2, ir restandole de 2 en 2 sucesivamente.
    int temp = numero;  // Usamos una variable temporal para no modificar el valor original de `numero`
    while (temp >= 2) {
        temp -= 2; 
    }

    // Si el numero termino siendo 0 , entonces es par, si no es 0, entonces es impar.
    if (temp == 0) {
        printf("El numero %d es par.\n", numero);
    } else {
        printf("El numero %d es impar.\n", numero);
    }

    return 0;
}


/*
#include <stdio.h>

int main() {
    int numero;

    //pedir el numero 
    printf("ingrese un numero natural: ");
    scanf("%d", &numero);

    // verificar si el numero es positivo (natural)
    if (numero < 0) {
        printf("ingrese un numero natural (>=0)\n");
        return 1;
    }

    // comprobacion para ver si el numero es par;
    //mientras que el numero sea mayor o igual a 2, ir restandole de 2 en 2 sucesivamente,
    while (numero >= 2) {
        numero -= 2; 
    }
    //aqui el numero ya no vale lo mismo que al inicio, ahora fue restado por dos n veces
    //si el numero termino siendo 0 , entonces es par , si el numero no es 0, entonces es impar
    if (numero == 0) {
        printf("El numero %d es par.\n", numero);
    } else {
        printf("El numero %d es impar.\n", numero);
    }

    return 0;
}
*/