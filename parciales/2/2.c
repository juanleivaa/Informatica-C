//dado el siguiente numero entero positivo de 5 digitos N=7826? donde el digito de las unidades puede 
//tomar los valores de 0 a 9 , probar los 10 numeros que se pueden contruir si son o no primos. 
//Ejemplo: Si el numero es N=3672? ,N=36720 no es primo , N=36721 es primo , N=36722 no es primo, y asi 
//sucesivamente hasta N=36729 que si es primo. 


#include <stdio.h>

int main() {
    int N = 7826;  // numero base
    int newN, i, j, divi;
    // generar los 10 numeros posibles agregando un dígito de 0 a 9 en las unidades
    for (i = 0; i <= 9; i++) {
        // Formar el nuevo numero concatenando N con el dígito i
        newN = N * 10 + i;
        divi = 0; // Contador de divisores
        // chequear si newN es primo
        for (j = 1; j <= newN; j++) {
            if (newN % j == 0) {
                divi++;
            }
        }
        // si tiene exactamente 2 divisores, es primo
        if (divi == 2) {
            printf("%d es primo\n", newN);
        } else {
            printf("%d no es primo\n", newN);
        }
    }
    return 0;
}
