/*Realizar un Diagrama de Flujo que solicite un número por teclado, mientras el usuario ingrese
números distintos del valor 0, y que por último, muestre por pantalla el promedio de los
números anteriormente ingresados. */

#include<stdio.h>
int main()
{
	int N,aux=0,c=0;
	float P;
	do
	{
	printf("Ingrese un numero para promediar --->");
	scanf("%d",&N);
	
	if(N!=0)
	{
	P=P+N;
	c=c+1;
	}
	
	}
	while(N!=0);
	
	P=P/c;
	
	printf("El promedio de los numeros ingresados es %.2f",P);

	
	return(0);
	
	
}
