/*Dante Fernandez,   
12/5/21,   
Ejemplo del Si Condicional (IF/THEN)*/
#include <stdio.h>
int main() {
	int x;
	printf("Ingrese valor de x=  ");
	scanf("%d",&x);
	if (x>0) {
		printf("%d Es positivo",x);
		}
	else {
		printf("Es negativo");
		}
	getch();
return (0);
}

