/*Escriba un Diagrama de Flujo que muestre todos los números enteros positivos menores o
iguales que un número N determinado.*/

#include<stdio.h>
int main()
{
	int N,C=1;
	
	printf("Ingrese el numero detreminado --->");
	scanf("%d",&N);
	
	printf("Los numeros menores positivos que %d, son: \n",N);
	while (C<=N)
	{
		
	printf("%d \n",C);
	C=C+1;
	
	}

	
	return(0);
}
