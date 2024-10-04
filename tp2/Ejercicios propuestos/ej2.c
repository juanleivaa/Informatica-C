//Escriba un programa que determine si el numero entero positivo ingresado por el
//usuario es par o no


#include <stdio.h>

int main(){

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

    // Verificamos si el numero es un entero positivo
    if(dif1 == 0 && numeroInt > 0){
        if(numeroInt % 2 == 0){
            printf("El numero %d es par.\n", numeroInt);
        }else{
            printf("El numero %d es impar.\n", numeroInt);
        }
    } else {
        printf("El numero ingresado no es entero positivo.\n");
    }
    
    
    return 0;
}


