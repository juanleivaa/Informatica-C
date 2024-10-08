/*Dante Fernandez,   
12/5/21,   
Ejemplo del SWITCH (Segun)*/
#include <stdio.h>
#include <math.h>     
int main() {
	int x;
	printf("Ingrese valor de x=  ");
	scanf("%d",&x);
	switch ( x )
	{
	   case 1 :  printf("LUNES"); 
	                         break; 
	   case 2 :  printf("MARTES");
	                         break; 
	   case 3 :  printf("MIERCOLES");
	                         break; 
	   case 4 :  printf("JUEVES") ;
	                         break; 
	   case 5 :  printf("VIERNES");
	                         break; 
	   case 6 :  printf("SABADO") ;
	                         break; 
	   case 7 : printf("DOMINGO") ;
	                         break; 
	   default : printf("NO ES UN NUMERO VALIDO") ;
			}
return (0);
}

