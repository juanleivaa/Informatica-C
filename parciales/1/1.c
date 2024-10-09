// ingrese 10 numero aleatorios enteros positivos de 3 digitos (entre 110 y 985) 
// y presentarlos por pantalla uno anajo del otro 
//Presente el numero original y si es multiplo de tres agregue el numer dividido en 3.


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

    // limites de generación de numeros de 3 digitos
    int superior = 985;
    int inferior = 110;

    // x va a almacenar los numeros aleatorios generados
    int x , i;

    // semilla
    srand(time(NULL));

    // genera diez numeros aleatorios
    for( i = 0; i < 10; i++) {

        // formula para generar numeros dentro de los limites
        x = inferior + rand() % (superior + 1 - inferior);

        // imprime cada numero uno debajo del otro
        printf("%d\n", x);

        // si el numero es múltiplo de 3, muestra su valor dividido por 3
        if(x % 3 == 0) {
            printf("Dividido por 3: %d\n", x / 3);
        }
    }

    return 0;
}

