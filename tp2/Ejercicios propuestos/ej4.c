//Dado un numero del 1 a 7 determinar el nombre del dia de la semana que
//corresponde. Limitar el ingreso del dato al rango indicado. 


#include <stdio.h>

int main(){

    // Declaramos una variable flotante para almacenar el numero ingresado por el usuario
    float numeroFloat;
    
    // Solicitamos al usuario que ingrese un numero
    printf("Ingrese un numero (1-7) y se le asignará el dia de la semana correspondiente: ");
    
    // Leemos el numero ingresado y lo almacenamos en la variable 'numeroFloat'
    scanf("%f", &numeroFloat);

    // Convertimos el numero flotante a un entero, descartando los decimales
    int numeroInt = (int)numeroFloat;

    // Calculamos la diferencia entre el numero original y el numero entero
    // Si 'dif1' es 0, significa que el numero ingresado no tenia parte decimal
    float dif1 = numeroFloat - (float)numeroInt;

    // Verificamos si el numero es un entero positivo y está dentro del rango permitido
    if(dif1 == 0 && numeroInt > 0 && numeroInt <= 7){
        switch(numeroInt) {
            case 1:
                printf("El numero %d corresponde al dia lunes.\n", numeroInt);
                break;
            case 2:
                printf("El numero %d corresponde al dia martes.\n", numeroInt);
                break;
            case 3:
                printf("El numero %d corresponde al dia miércoles.\n", numeroInt);
                break;
            case 4:
                printf("El numero %d corresponde al dia jueves.\n", numeroInt);
                break;
            case 5:
                printf("El numero %d corresponde al dia viernes.\n", numeroInt);
                break;
            case 6:
                printf("El numero %d corresponde al dia sábado.\n", numeroInt);
                break;
            case 7:
                printf("El numero %d corresponde al dia domingo.\n", numeroInt);
                break;
            default:
                printf("Error inesperado.\n");
        }
    } else {
        printf("El numero ingresado no es un entero positivo entre 1 y 7.\n");
    }

    return 0;
}



