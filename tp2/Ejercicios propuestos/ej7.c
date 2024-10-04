//Dado un número entero, determinar si representa un determinado mes (1
//corresponde a enero,… , 12 a diciembre), en caso afirmativo, mostrar el nombre del
//mes correspondiente. En caso de que el número sea menor que 1 o mayor que 12,
//mostrar el mensaje indicando que no corresponde. 



#include <stdio.h>

int main() {
    // Declaramos una variable flotante para almacenar el numero ingresado por el usuario
    float numeroFloat;
    
    // Solicitamos al usuario que ingrese un numero
    printf("Ingrese un numero (1-12) y se le asignara el mes correspondiente: ");
    
    // Leemos el numero ingresado y lo almacenamos en la variable 'numeroFloat'
    scanf("%f", &numeroFloat);

    // Convertimos el numero flotante a un entero, descartando los decimales
    int numeroInt = (int)numeroFloat;

    // Calculamos la diferencia entre el numero original y el numero entero
    // Si 'dif1' es 0, significa que el numero ingresado no tenia parte decimal
    float dif1 = numeroFloat - (float)numeroInt;

    // Verificamos si el numero es un entero positivo y esta dentro del rango permitido
    if(dif1 == 0 && numeroInt > 0 && numeroInt <= 12) {
        switch(numeroInt) {
            case 1:
                printf("El numero %d corresponde al mes enero.\n", numeroInt);
                break;
            case 2:
                printf("El numero %d corresponde al mes febrero.\n", numeroInt);
                break;
            case 3:
                printf("El numero %d corresponde al mes marzo.\n", numeroInt);
                break;
            case 4:
                printf("El numero %d corresponde al mes abril.\n", numeroInt);
                break;
            case 5:
                printf("El numero %d corresponde al mes mayo.\n", numeroInt);
                break;
            case 6:
                printf("El numero %d corresponde al mes junio.\n", numeroInt);
                break;
            case 7:
                printf("El numero %d corresponde al mes julio.\n", numeroInt);
                break;
            case 8:
                printf("El numero %d corresponde al mes agosto.\n", numeroInt);
                break;
            case 9:
                printf("El numero %d corresponde al mes septiembre.\n", numeroInt);
                break;
            case 10:
                printf("El numero %d corresponde al mes octubre.\n", numeroInt);
                break;
            case 11:
                printf("El numero %d corresponde al mes noviembre.\n", numeroInt);
                break;
            case 12:
                printf("El numero %d corresponde al mes diciembre.\n", numeroInt);
                break;
            default:
                printf("Error inesperado.\n");
        }
    } else {
        printf("El numero ingresado no es un entero positivo entre 1 y 12.\n");
    }

    return 0;
}
