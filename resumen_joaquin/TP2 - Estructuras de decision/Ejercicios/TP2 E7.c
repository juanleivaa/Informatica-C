#include <stdio.h>

int main()
{
	int M;
	
	printf("Ingrese un numero, para que represente un mes del año \n");
	scanf("%d",&M);
	
switch(M)
	{
	case 1: printf("Ese numero representa el mes de ENERO \n");
	break;
	case 2: printf("Ese numero representa el mes de FEBRERO \n");
	break;
	case 3: printf("Ese numero representa el mes de MARZO \n");
	break;
	case 4: printf("Ese numero representa el mes de ABRIL \n");
	break;
	case 5: printf("Ese numero representa el mes de MAYO \n");
	break;
	case 6: printf("Ese numero representa el mes de JUNIO \n");
	break;
	case 7: printf("Ese numero representa el mes de JULIO \n");
	break;
	case 8: printf("Ese numero representa el mes de AGOSTO \n");
	break;
	case 9: printf("Ese numero representa el mes de SEPTIEMBRE \n");
	break;
	case 10: printf("Ese numero representa el mes de OCTUBRE \n");
	break;
	case 11: printf("Ese numero representa el mes de NOVIEMBRE \n");
	break;
	case 12: printf("Ese numero representa el mes de DICIEMBRE \n");
	break;
	default: printf("Ese numero no corresponde a ningun mes \n");
	}
	
	
	return 0;	
}
