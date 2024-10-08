/*Un juego consiste en lanzar un dado, si el número obtenido no es igual a 6 se debe lanzar
nuevamente el dado, repitiendo todo nuevamente en caso de que el número obtenido no
sea 6. Se necesita saber el resultado de la suma de los números pares obtenidos y el
resultado de la suma de los números impares obtenidos.*/

#include<stdio.h>
#include<math.h>

int main()
{
	int D,sp=0,si=0,i=0;			//declaracion de variables
	
	srand(time(NULL));				//seteo al tiempo como semilla del aleatorio
	
	do 
	{
		do  										//filtro desde 1 a 6
		{
			D=rand()%10;
		}
		while (D<1||D>6);
		printf("Salio el %d \n",D);		//muestra lo que salio en el dado

		
	if(D%2==0)							//acumula pares e impares
		{
		sp=sp+D;
		}
		else
		{
		si=si+D;
		}
	    i++;   							//lleva la cuenta de la cantidad de tiros
	    
	}
	while(D<6);  //si no salio 6, vuelve a tirar el dado
	printf("La suma de los numeros pares tirados por el dado es %d, y la suma de los impares es %d",sp,si);
	
	return(0);
}
