//Resuelva el problema usando únicamente estructuras de selección: 
//Ingresar un numero entero positivo, luego presentar por pantalla un mensaje indicando si ese número 
//es igual a cero, positivo o negativo.

#include <stdio.h>

int main(){

    // Declaramos una variable flotante para almacenar el primer número ingresado por el usuario
    float n1;
    
    //le pido un numero al usuario 
    printf("Ingrese un numero: ");
    scanf("%f", &n1);

    //guardo el numero sin decimales un otra variable
    int n2 = (int)n1;

    // calculamos la diferencia entre el número original y el número entero
    float dif1 = n1 - (float)n2;

    // verifico si el primer número es un entero positivo
    // si 'dif1' es 0, significa que el número ingresado no tenía parte decimal y por lo tanto es entero
    // sino no es entero
    if(dif1 == 0){
        //analizo si n1 es positivo o cero
        if(n1>=0){
            if(n1==0){
                printf("el numero es cero");
            }else{
                printf("el numero es positivo");
            }
        //sino es ni cero ni positivo entonces es negativo
        }else {
            printf("el numero es negativo");
        }
    }else {
        printf("El numero no es entero ");
    }
    
    return 0;

}

