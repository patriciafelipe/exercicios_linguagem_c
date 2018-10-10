#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
float base, altura, areatotal;

printf("\n Base Retângulo: ");
scanf("%f", &base);
printf("\n Altura do Retângulo: ");
scanf("%f", &altura);
areatotal = base*altura;
printf("\n A área do retângulo é :%f", areatotal);
	
system("PAUSE");
return 0;
}
