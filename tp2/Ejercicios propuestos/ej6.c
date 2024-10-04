//Dado un número entero, presentar por pantalla un mensaje indicando si dicho
//número es igual a cero, par o impar


#include <stdio.h>

int main() {
    // Declaramos una variable flotante para almacenar el numero ingresado por el usuario
    float numeroFloat;
    
    // Solicitamos al usuario que ingrese un numero
    printf("Ingrese un numero: ");
    
    // Leemos el numero ingresado y lo almacenamos en la variable 'numeroFloat'
    scanf("%f", &numeroFloat);

    // Convertimos el numero flotante a un entero, descartando los decimales
    int numeroInt = (int)numeroFloat;

    // Calculamos la diferencia entre el numero original y el numero entero
    // Si 'dif1' es 0, significa que el numero ingresado no tenía parte decimal
    float dif1 = numeroFloat - (float)numeroInt;

    // Verificamos si el numero es un entero
    if(dif1 == 0) {
        if(numeroInt == 0) {
            // El número es cero
            printf("El numero %d es cero.\n", numeroInt);
        } else if(numeroInt % 2 == 0) {
            // El número es par
            printf("El numero %d es par.\n", numeroInt);
        } else {
            // El número es impar
            printf("El numero %d es impar.\n", numeroInt);
        }
    } else {
        // El número ingresado no es entero
        printf("El numero ingresado no es entero.\n");
    }
    
    return 0;
}