#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float l1,l2,l3,perimetro, area, volume, diagonal;
	
		printf("\n Lado 1:");
	scanf("%f", &l1);
		printf("\n Lado 2:");
	scanf("%f", &l2);
		printf("\n Lado 3:");
	scanf("%f", &l3);
	
	diagonal= pow(l1,2)+pow(l2,2)+pow(l3,2);
	area = 2*(l1*l2+l1*l3+l2*l3);
	volume = l1*l2*l3;
	perimetro = 4*(l1+l2+l3);
	
	printf("\n O Valor da diagonal é: %f",diagonal);
	printf("\n O Valor da área é: %f",area);
	printf("\n O Valor do volume é: %f",volume);
	printf("\n O Valor do perimetro é: %f", perimetro);
	
	system("PAUSE");
return 0;
}
