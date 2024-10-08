/*Realizar un Diagrama de Flujo que permita mostrar por pantalla, los N números pares
consecutivos comenzando desde el número 2.*/

#include<stdio.h>
int main()
{
	int C,aux,i;
	
	printf("Ingrese la cantidad de numeros pares despues de el 2 que quiera mostrar --->");
	scanf("%d",&C);
	
	aux=C;
	
	printf("Los %d numeros pares despues del 2 son: \n",aux);
	
	for(i=2;i<=C*2;i=i+2)
	
	printf("%d ",i);
	
	
	getchar;
	return (0);

}
	
	
