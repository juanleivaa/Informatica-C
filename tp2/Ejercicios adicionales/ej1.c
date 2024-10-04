//Dada la fecha de nacimiento de una persona (en formato DDMMAAAA) realizar el
//análisis para determinar si puede o no votar. Se deberá indicar con un mensaje en
//pantalla si la persona vota o no. Tener en cuenta que se vota a los 16 años,
//cumplidos hasta el 31 de julio inclusive. La fecha de votación es hoy. 


#include <stdio.h>

int main() {
    int diaNacimiento, mesNacimiento, anioNacimiento;
    int diaHoy = 11, mesHoy = 9, anioHoy = 2024;  // Fecha actual (se puede modificar según el día actual)

    // Solicitamos la fecha de nacimiento
    printf("Ingrese su fecha de nacimiento en formato DDMMAAAA sin espacios,guiones, ni barras: ");
    scanf("%2d%2d%4d", &diaNacimiento, &mesNacimiento, &anioNacimiento);

    // Calculamos la edad
    int edad = anioHoy - anioNacimiento;

    // Ajustamos la edad si aún no ha cumplido años este año
    if (mesHoy < mesNacimiento || (mesHoy == mesNacimiento && diaHoy < diaNacimiento)) {
        edad--;
    }

    // Verificamos si tiene 16 años o más
    if (edad > 16) {
        printf("La persona puede votar.\n");
    } else if (edad == 16) {
        // Si tiene exactamente 16 años, verificamos si cumple antes del 31 de julio
        if (mesNacimiento < 7 || (mesNacimiento == 7 && diaNacimiento <= 31)) {
            printf("La persona puede votar.\n");
        } else {
            printf("La persona no puede votar.\n");
        }
    } else {
        printf("La persona no puede votar.\n");
    }

    return 0;
}
