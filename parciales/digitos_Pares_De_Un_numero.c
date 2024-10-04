//Resuelva el problema usando únicamente estructuras Combinadas:
//Escribir un programa que presente por pantalla la suma de los digitos pares, de un numero entero positivo ingresado por el usuario


#include <stdio.h>

int main() {

    float n1;

    // le pedimos un numero al usuario (este n1 sera guardado con decimales , aunque sea .0)
    printf("ingrese un numero: ");
    scanf("%f", &n1);

    // guardamos el numero sin decimales en otra variable
    int n2 = (int)n1;

    // calculamos la diferencia entre el numero original y el numero entero
    float dif1 = n1 - (float)n2;

    // si la diferencia entre el numero entero y el numero con decimales es 0,  entonces quiere decir que es
    //entero
    if (dif1 == 0) {
        //verifico si el numero es positivo
        if (n1 > 0) {
            //guardo el numero original para poder usarlo al final en el scanf sino se perdera
            int originalNum = n2;
            int digit, sum = 0;

            // el proceso se repetira siempre y cuando el numero ingresado sea mayor que cero 
            while (n2 > 0) {
                // el resto de la division sera el ultimo digito del numero ingresado
                //eso es gracias al %
                digit = n2 % 10;

                // si ese ultimo digito del numero es par, entonces se lo suma a la variable sum ,
                //que es un acumulador 
                if (digit % 2 == 0) {
                    sum += digit;
                }

                // a diferencia del  % , la barra (/) lo que hace es darme la parte entera del numero
                //y por lo tanto nos devuelve el numero sin el ultimo digito 
                n2 = n2 / 10;
            }

            printf("la suma de los digitos pares del numero %d es: %d\n", originalNum, sum);

        } else {
            printf("el numero ingresado no es un entero positivo.\n");
        }
    } else {
        printf("el numero ingresado no es entero.\n");
    }
    return 0;
}




