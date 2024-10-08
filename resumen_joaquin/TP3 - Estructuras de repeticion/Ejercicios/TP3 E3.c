/*Escriba un Diagrama de Flujo que muestre la tabla de multiplicar de un número ingresado por
el usuario*/

#include<stdio.h>
int main()
{
	int N,M,aux,i;
	
	printf("Ingrese el numero que dea saber la tabla --->");
	scanf("%d",&N);

	aux=N;
	
	printf("La tabla de el numero %d, es: \n",aux);
	for(i=0;i<11;i++)
	{
	M=N*i;
	
	printf("%d x %d = %d \n",aux,i,M);
	}

return(0);	
}
