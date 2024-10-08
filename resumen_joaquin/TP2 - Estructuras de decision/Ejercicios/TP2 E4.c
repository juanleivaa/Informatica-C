#include <stdio.h>

int main()
{
	int D;
	
	printf("Ingrese un numero, para que represente los dias de la semana \n");
	scanf("%d",&D);
	
switch(D)
	{
	case 1: printf("DOMINGO \n");
	break;
	case 2: printf("LUNES \n");
	break;
	case 3: printf("MARTES \n");
	break;
	case 4: printf("MIERCOLES \n");
	break;
	case 5: printf("JUEVES \n");
	break;
	case 6: printf("VIERNES \n");
	break;
	case 7: printf("SABADO \n");
	break;
	default: printf("Ese numero no corresponde con un dia de la semana \n");
	}
	
	
	return 0;	
}
