#include <stdio.h>

int main()
{
	float x,y,c=c>0;
	
	printf("Ingrese el primer numero --->");
	scanf("%f",&x);

	printf("Ingrese el segundo numero --->");
	scanf("%f",&y);
	
	c=x/y;
	
	printf("El cociente entre %.0f y %.0f es %.0f",x , y, c);
	
	getchar();
	return(0);

}
