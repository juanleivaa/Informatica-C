#include<stdio.h>
int main()

{
	int C1,C2,H;
	
	printf("Ingrese el valor de el cateto 1 ---->");
	scanf("%d",&C1);
	
	printf("Ingrese el valor de el cateto 2 ---->");
	scanf("%d",&C2);
	
	H=C1*C1+C2*C2;
	
	printf("El valor de la hipotenusa es igual a %d",H);
	
	getchar();
	return 0;
	
}
