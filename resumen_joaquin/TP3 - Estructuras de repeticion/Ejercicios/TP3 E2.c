/*Escriba un Diagrama de Flujo que calcule y muestre el resultado de la suma de todos los
números enteros positivos menores que un número N determinado. */

#include<stdio.h>
int main()

{
	int N,S=0,aux;
	
	printf("Ingresa un numero ---> ");
	scanf("%d",&N);
	
	aux=N;
	
	while(N>0)
	{
	N=N-1;
	S=S+N;	
	}
	printf("La suma de los numeros menores que %d, es %d",aux,S);
	
return (0);
}
