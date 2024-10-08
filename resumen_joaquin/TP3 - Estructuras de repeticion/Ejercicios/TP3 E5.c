/*Escriba un Diagrama de Flujo que pida al usuario un entero de dos o más dígitos, y entregue
otro número con los dígitos en orden inverso.*/

#include<stdio.h>
int main()
{
	int N,INV=0,D, aux;
	
	printf("Ingrese un numero que desea invertir --->");
	scanf("%d",&N);
	
	aux=N;
	
	while(N>0)
	{
		
	D=N%10; 					 //MOD 10 te da la ultima cifra
	N=N/10;  					//No la toma a la ultima cifra
	INV=(INV*10)+D;

	
	}
printf("El numero inverso de %d, es %d", aux,INV);

getchar;
return(0);

}
