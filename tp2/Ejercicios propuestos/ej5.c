//Dado dos números enteros, calcular el cociente entre los mismos, tenga en cuenta
//que el denominador no puede ser 0. El cociente debe ser Real 


#include <stdio.h>

int main(){

    int numerador, denominador;
    float cociente;

    // Solicitamos al usuario que ingrese el numerador
    printf("Ingrese el numerador (entero): ");
    scanf("%d", &numerador);

    // Solicitamos al usuario que ingrese el denominador
    printf("Ingrese el denominador (entero, distinto de 0): ");
    scanf("%d", &denominador);

    // Verificamos que el denominador no sea 0
    if (denominador != 0) {
        // Convertimos los números enteros a flotantes, para realizar la división con decimales 
        //y obtener un resultado preciso 
        cociente = (float) numerador / (float) denominador;
        printf("El cociente entre %d y %d es: %.2f\n", numerador, denominador, cociente);
    } else {
        printf("Error: El denominador no puede ser 0.\n");
    }
    return 0;
}



