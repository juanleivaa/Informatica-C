//Sabiendo la estatura de tres niños, se necesita ordenar las mismas en forma
//descendente, determinar cuál altura va primero, cuál va en segundo lugar y cuál en
//tercer lugar. Nota: Tener en cuenta que las alturas también pueden ser iguales. 


#include <stdio.h>

int main() {

    float estatura1, estatura2, estatura3;

        // Solicitamos las estaturas de los tres niños
        printf("Ingrese la estatura del primer nino: ");
        scanf("%f", &estatura1);
        
        printf("Ingrese la estatura del segundo nino: ");
        scanf("%f", &estatura2);
        
        printf("Ingrese la estatura del tercer nino: ");
        scanf("%f", &estatura3);

        // Verificamos que todas las estaturas sean mayores a 0
        if (estatura1 <= 0 || estatura2 <= 0 || estatura3 <= 0) {
            printf("Error: Todas las estaturas deben ser mayores a 0.\n");
            return 1; // Finalizamos el programa si alguna estatura no es válida
        }

        // Verificamos todas las combinaciones posibles de orden descendente
        if(estatura1 > estatura2 && estatura1 > estatura3 && estatura2 > estatura3) {
            printf("La mayor estatura es: %.2f\n", estatura1);
            printf("La segunda mayor estatura es: %.2f\n", estatura2);
            printf("La tercera mayor estatura es: %.2f\n", estatura3);
        } else if(estatura1 > estatura2 && estatura1 > estatura3 && estatura3 > estatura2) {
            printf("La mayor estatura es: %.2f\n", estatura1);
            printf("La segunda mayor estatura es: %.2f\n", estatura3);
            printf("La tercera mayor estatura es: %.2f\n", estatura2);
        } else if(estatura2 > estatura1 && estatura2 > estatura3 && estatura1 > estatura3) {
            printf("La mayor estatura es: %.2f\n", estatura2);
            printf("La segunda mayor estatura es: %.2f\n", estatura1);
            printf("La tercera mayor estatura es: %.2f\n", estatura3);
        } else if(estatura2 > estatura1 && estatura2 > estatura3 && estatura3 > estatura1) {
            printf("La mayor estatura es: %.2f\n", estatura2);
            printf("La segunda mayor estatura es: %.2f\n", estatura3);
            printf("La tercera mayor estatura es: %.2f\n", estatura1);
        } else if(estatura3 > estatura1 && estatura3 > estatura2 && estatura1 > estatura2) {
            printf("La mayor estatura es: %.2f\n", estatura3);
            printf("La segunda mayor estatura es: %.2f\n", estatura1);
            printf("La tercera mayor estatura es: %.2f\n", estatura2);
        } else if(estatura3 > estatura1 && estatura3 > estatura2 && estatura2 > estatura1) {
            printf("La mayor estatura es: %.2f\n", estatura3);
            printf("La segunda mayor estatura es: %.2f\n", estatura2);
            printf("La tercera mayor estatura es: %.2f\n", estatura1);
        }

        // Casos en que dos o más estaturas son iguales
        else if(estatura1 == estatura2 && estatura1 > estatura3) {
            printf("Las dos mayores estaturas son: %.2f\n", estatura1);
            printf("La menor estatura es: %.2f\n", estatura3);
        } else if(estatura1 == estatura3 && estatura1 > estatura2) {
            printf("Las dos mayores estaturas son: %.2f\n", estatura1);
            printf("La menor estatura es: %.2f\n", estatura2);
        } else if(estatura2 == estatura3 && estatura2 > estatura1) {
            printf("Las dos mayores estaturas son: %.2f\n", estatura2);
            printf("La menor estatura es: %.2f\n", estatura1);
        } else if(estatura1 == estatura2 && estatura2 == estatura3) {
            printf("Las tres estaturas son iguales: %.2f\n", estatura1);
        }

        return 0;
}
