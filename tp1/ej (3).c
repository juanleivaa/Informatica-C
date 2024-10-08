#include<stdio.h>
int main()

{
	float r,d,p,a,pi=3.1415;
	
	printf("Ingrese el valor de el radio ---->");
	scanf("%f",&r);
	
	d=2*r;
	p=2*pi*r;
	a=pi*r*r;
	
	printf("El diametro de el circulo es igual a %f \n",d);
	printf("El perimetro de el circulo es igual a %f \n",p);
	printf("El area de el circulo es igual a %f \n",a);
	
	getchar ();
	return 0;
	
}

