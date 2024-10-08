/*Escriba un Diagrama de Flujo que muestre el resultado de la suma de todos los dígitos
pertenecientes a un número entero ingresado por el usuario. */

#include<stdio.h>
int main()

{
	int N,S=0,D,aux;
	
	printf("Ingrese en numero que desea sumar sus digitos --->");
	scanf("%d",&N);
	
	aux=N;
	
	while(N>0)
	{
	D=N%10;
	N=N/10;
	S=S+D;
	
	}
	printf("La suma los digitos de %d, es %d",aux,S);
	
getchar;
return (0);
}
