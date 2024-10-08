/*Realizar un Diagrama de Flujo que permita calcular el factorial de un número, ingresado por el
usuario.*/

#include<stdio.h>
int main()
{
	int N,F=1,aux;
	
		printf("Ingrese el numero que desea saber el factorial --->");
		scanf("%d",&N);
	
	aux=N;	

	while(N>1)
	{
	F=F*N;
	N=N-1;
	}
	printf("El factorial de %d, es %d",aux,F);
	
getchar;
return(0);
}

