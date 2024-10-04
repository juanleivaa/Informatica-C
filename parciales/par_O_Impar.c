//ingresar un numero natural y presentar por pantalla si el numero es par , no puede usar ni mod ni div 
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
    
    if (numero == 0) {
        printf("El numero %d es par.\n", numero);
    } else {
        printf("El numero %d es impar.\n", numero);
    }

    return 0;
}
