#include <stdio.h>

int main()
{
	int N;
	
	printf("Ingrese la nota de la prueba \n");
	scanf("%d",&N);
	
switch(N)
	{
	case 0: printf("DESAPROBO \n");
	break;
	case 1: printf("DESAPROBO \n");
	break;
	case 2: printf("DESAPROBO \n");
	break;
	case 3: printf("DESAPROBO \n");
	break;
	case 4: printf("DESAPROBO \n");
	break;
	case 5: printf("DESAPROBO \n");
	break;
	case 6: printf("APROBO \n");
	break;
	case 7: printf("APROBO \n");
	break;
	case 8: printf("APROBO \n");
	break;
	case 9: printf("APROBO \n");
	break;
	case 10: printf("APROBO \n");
	break;
	default: printf("Ese numero no entra en las notas de un prueba \n");
	}
	
	
	return 0;	
}
