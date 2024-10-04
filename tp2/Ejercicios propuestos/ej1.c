//Escriba un programa que determine si un número ingresado por el usuario es
//mayor que cero. 


#include <stdio.h>

int main() {
    float numero;

    printf("Ingrese el numero: ");
    scanf("%f", &numero);

    if(numero>0){
        printf("El numero ingresado es mayor que cero ");
    } else {
        printf("El numero ingresado es menor o igual cero");
    }

    return 0;
}
