/*Realizar un Diagrama de Flujo que solicite un n�mero por teclado, mientras el usuario ingrese
n�meros distintos del valor 0, y que por �ltimo, muestre por pantalla el promedio de los
n�meros anteriormente ingresados. */

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
