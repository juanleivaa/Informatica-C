#include <stdio.h>

int main()
{
	int N;
	
	printf("Ingrese un numero positivo --->");
	scanf("%d",&N);
	
	if (N%2==0)
		{
		printf("El numero ingresado es PAR \n");
		}
	
	else
		{
		printf("El numero ingresado es IMPAR \n");
		};
		
	return 0;	
}
