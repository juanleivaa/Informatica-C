/*Un juego consiste en lanzar un dado, si el número obtenido no es igual a 6 se debe lanzar
nuevamente el dado, repitiendo todo nuevamente en caso de que el número obtenido no
sea 6. Se necesita saber el resultado de la suma de los números pares obtenidos y el
resultado de la suma de los números impares obtenidos.*/

#include<stdio.h>
#include<math.h>
#include<time.h>

int main()
{
	int D,sp=0,si=0,lims=6,limi=1;			//declaracion de variables
	
	srand(time(NULL));	 			//seteo al tiempo como semilla del aleatorio
	
	do  										//filtro desde 1 a 6	
	{
		D=rand() % (lims+1-limi) + limi;       //defino los limites del random
	
	if(D%2==0)						//acumula pares e impares
		{
		sp=sp+D;					
		}
		else
		{
		si=si+D;
		}
		printf("Salio el %d \n",D);		//muestra lo que salio en el dado
	}
	while(D<6);  //si no salio 6, vuelve a tirar el dado
	printf("La suma de los numeros pares tirados por el dado es %d \nLa suma de los impares es %d",sp,si);
	
	getchar();
	return 0;
	
	
}
