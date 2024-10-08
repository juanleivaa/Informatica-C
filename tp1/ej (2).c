#include<stdio.h>
int main()

{
	int n1,n2,n3,p;
	
	printf("Ingrese la nota 1 ---->");
	scanf("%d",&n1);
	
	printf("Ingrese la nota 2 ---->");
	scanf("%d",&n2);
	
	printf("Ingrese la nota 3 ---->");
	scanf("%d",&n3);
	
	p=(n1+n2+n3)/3;
	
	printf("El promedio de las notas es igual a %d",p);
	
	getchar();
	return 0;
	
}
	
