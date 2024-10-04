//De acuerdo a la nota obtenida por un estudiante en la prueba de una asignatura, se
//desea que se imprima en pantalla si el estudiante “Aprobó” la prueba. Considerar
//que para aprobar la nota debe ser mayor o igual a 6. Limitar el ingreso del datos al
//rango [0;10] 



#include <stdio.h>

int main(){
    float nota;

    // Solicitamos al usuario que ingrese un numero
    printf("Ingrese la nota del alumno: ");
    // Leemos el numero ingresado y lo almacenamos en la variable 'numeroFloat'
    scanf("%f", &nota);

    if(nota>=0 && nota<=10) {
        if(nota>=6){
            printf("El alumno aprobo");
        }else{
            printf("El alumno desaprobo");
        }
    }else{
        printf("La nota debe estar estar entre 0 y 10");
    }


    return 0;
}


