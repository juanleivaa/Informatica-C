//Resuelva el problema usando únicamente estructuras de repetición: Presentar por pantalla todos los 
//números pertenecientes a la serie de Fibonacci menores que un valor N ingresado.
#include <stdio.h>

int main() {
    int num1, a, b, c;
    //los dos primeros numeros de la serie de fibonacci
    a = 0;
    b = 1;

    printf("ingrese un numero ");
    scanf("%d", &num1);

    // mientras los numeros de la seria sean menor que el valor que se ingreso
    // se hace el calculo, donde c es una variable auxiliar que nos sirve para tomar 
    //el ultimo valor de la serie y luego asignarle ese valor a b
    while (a < num1) {
        printf("%d\n", a);
        c = a + b;   // c=0+1   // c=1+1    //c=1+2
        a = b;       // a=1     // a=1      //a=2
        b = c;       // b=1     // b=2      //b=3
    }

    return 0;
}


//---------------------------PSEINT-------------------------------//

/*
Algoritmo VerificarNumeroEntero
    // Declaramos una variable real para almacenar el número ingresado por el usuario
    Definir n1 Como Real
	
    // Le pedimos un número al usuario 
    Escribir "Ingrese un número: "
    Leer n1
	
    // Guardamos el número sin decimales en otra variable
    n2 <- Trunc(n1)
	
    // Calculamos la diferencia entre el número original y el número entero
    dif1 <- n1 - n2
	
    // Verificamos si el primer número es un entero
    Si dif1 = 0 Entonces
        Si n1 >= 0 Entonces
            Si n1 = 0 Entonces
                Escribir "El número es cero"
            Sino
                Escribir "El número es positivo"
            FinSi
        Sino
            Escribir "El número es negativo"
        FinSi
    Sino
        Escribir "El número no es entero"
    FinSi
FinAlgoritmo
*/

//---------------------------PSEINT-------------------------------//

