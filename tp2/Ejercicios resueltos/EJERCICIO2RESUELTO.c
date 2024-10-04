//Ingresar tres valores positivos, indicar si son lados de un triángulo rectángulo.
//Presentar por pantalla el mensaje correspondiente.


#include <stdio.h>

int main() {
    // Declaramos tres variables para almacenar los valores de los lados
    float a, b, c;

    // Solicitamos al usuario que ingrese los tres valores
    printf("Ingrese el primer valor: ");
    scanf("%f", &a);
    printf("Ingrese el segundo valor: ");
    scanf("%f", &b);
    printf("Ingrese el tercer valor: ");
    scanf("%f", &c);

    // Verificamos que los tres valores sean positivos
    if (a > 0 && b > 0 && c > 0) {
        // Identificamos cuál es el lado más largo (la posible hipotenusa)
        float hipotenusa, lado1, lado2;

        if (a > b && a > c) {
            hipotenusa = a;
            lado1 = b;
            lado2 = c;
        } else if (b > a && b > c) {
            hipotenusa = b;
            lado1 = a;
            lado2 = c;
        } else {
            hipotenusa = c;
            lado1 = a;
            lado2 = b;
        }

        // Aplicamos el teorema de Pitágoras
        if (hipotenusa * hipotenusa == lado1 * lado1 + lado2 * lado2) {
            printf("Los valores ingresados FORMAN un triangulo rectangulo.\n");
        } else {
            printf("Los valores ingresados NO FORMAN un triangulo rectangulo.\n");
        }

    } else {
        // Si algún valor es negativo o cero, mostramos un mensaje de error
        printf("Los valores deben ser positivos.\n");
    }

    return 0;
}
