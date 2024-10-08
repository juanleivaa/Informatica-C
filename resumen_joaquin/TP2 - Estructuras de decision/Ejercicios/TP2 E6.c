#include <stdio.h>

int main()
{
	int K;
	
	printf("Ingrese un numero positivo --->");
	scanf("%d",&K);
	
	if (K==0)
	{
	printf("El numero ingresado es cero \n");
			}
	
	else if (K%2==0)
	{
		printf("El numero ingresado es PAR \n");
			}
	else
	{ 
		printf("El numero es IMPAR \n");
			}
		
	return 0;
		
}
