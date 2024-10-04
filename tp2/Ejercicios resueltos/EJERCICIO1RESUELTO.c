//Dados dos números enteros positivos, presentar por pantalla si el primer número 
//ingresado es múltiplo del segundo número. 

#include <stdio.h>

int main(){

    // Declaramos una variable flotante para almacenar el primer número ingresado por el usuario
    float n1;
    
    // Solicitamos al usuario que ingrese el primer número
    printf("Ingrese un primer numero: ");
    
    // Leemos el número ingresado y lo almacenamos en la variable 'n1'
    scanf("%f", &n1);

    // Convertimos el número flotante a un entero, descartando los decimales
    int n2 = (int)n1;

    // Calculamos la diferencia entre el número original y el número entero
    // Si 'dif1' es 0, significa que el número ingresado no tenía parte decimal
    float dif1 = n1 - (float)n2;

    // Verificamos si el primer número es un entero positivo
    if(dif1 == 0 && n1 > 0){

        // Declaramos una variable flotante para el segundo número
        float n3;
        
        // Solicitamos al usuario que ingrese el segundo número
        printf("Ingrese un segundo numero: ");
        
        // Leemos el número ingresado y lo almacenamos en la variable 'n3'
        scanf("%f", &n3);

        // Convertimos el segundo número flotante a entero
        int n4 = (int)n3;

        // Calculamos la diferencia entre el segundo número original y el entero
        // Si 'dif2' es 0, el segundo número tampoco tiene parte decimal
        float dif2 = n3 - (float)n4;

        // Verificamos si el segundo número es un entero positivo
        if(dif2 == 0 && n3 > 0){

            // Verificamos si el primer número es múltiplo del segundo
            if (n2 % n4 == 0) {
                // Si es múltiplo, mostramos el mensaje correspondiente
                printf("El numero %d es multiplo de %d\n", n2, n4);
            } else {
                // Si no es múltiplo, mostramos el mensaje correspondiente
                printf("El numero %d no es multiplo de %d\n", n2, n4);
            }

        } else {
            // Si el segundo número no es válido (no entero o no positivo), mostramos un mensaje de error
            printf("no es valido");
        }

    } else {
        // Si el primer número no es válido (no entero o no positivo), mostramos un mensaje de error
        printf("no es valido");
    }
    
    // Fin del programa
    return 0;
}
