#include<stdio.h>
int main()

{
	float H,M,S,Hs,Ms,Ts;
	
	printf("Ingrese la cantidad de horas ---->");
	scanf("%f",&H);
	
	printf("Ingrese la cantidad de minutos ---->");
	scanf("%f",&M);
	
	printf("Ingrese la cantidad de segundos ---->");
	scanf("%f",&S);
	
	
	Hs=H*3600;
	
	Ms=M*60;
	
	printf("Las horas ingresadas, en segundos es igual a %f \n",Hs);
	
	printf("Los minutos ingresados, expresados en segundos es igual a %f \n",Ms);
	
	Ts=Hs+Ms+S;
	
	printf("La suma de las horas, los minutos y segundos, expresado en segundos es igual a %f \n",Ts);
	
	getchar;
	return 0;

}
