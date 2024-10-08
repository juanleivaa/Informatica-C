/*Escriba un Diagrama de Flujo que determine la cantidad de dígitos en un número entero
ingresado por el usuario.*/

#include<stdio.h>
int main()

{
int N,D=0,aux;


	printf("Ingrese el numero que desea contar los digitos --->");
	scanf("%d",&N);
	
	aux=N;
	
	while (N>0)
	{

	N=N/10;	
	D=D+1;
	
	}
	printf("La cantidad de digitos de %d es %d",aux,D);		


getchar;
return (0);
}



