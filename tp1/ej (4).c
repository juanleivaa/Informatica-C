#include<stdio.h>
int main()

{
	float B,KB,MB,GB,TB;
	
	printf("Ingrese la cantidad de Mbytes ---->");
	scanf("%f",&MB);
	
	B=(MB*1024)*8;
	
	printf("La cantidad ingresada de Mbytes en Bytes es igual a %f \n",B);
	
	KB=MB*1024;
	
	printf("La cantidad ingresada de Mbytes en Kbytes es igual a %f \n",KB);
	
	GB=MB/1024;
	
	printf("La cantidad ingresada de Mbytes en Gbytes es igual a %f \n",GB);
	
	TB=(MB/1024)/1024;
	
	printf("La cantidad ingresada de Mbytes en Tbytes es igual a %f \n",TB);

	getchar;
	return 0;
	
}
