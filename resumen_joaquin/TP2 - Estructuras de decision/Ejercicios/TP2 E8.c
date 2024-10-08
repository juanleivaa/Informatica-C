#include <stdio.h>

int main()
{
	int a,b;
	
	printf("Ingrese el primer numero --->");
	scanf("%d",&a);
	printf("Ingrese el segundo numero --->");
	scanf("%d",&b);
	

	if (a==b)
	{
	
	printf("Los numeros ingresados son iguales");
	}
	
	else
		if (a>b)
		{
		printf("%d es mayor que %d \n",a,b);
		}
		else
		{ 
		printf("%d es menor que %d",a,b);
		};
		
	return 0;	
}
