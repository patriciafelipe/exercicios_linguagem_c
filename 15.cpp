#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
float raio, altura, volume;

printf("\n Informe o raio: ");
scanf("%f",&raio);
printf("\n Informe a altura: ");
scanf("%f",&altura);
volume=3.14*(raio*raio)*altura;
printf("\n A área externa da lata é %f",volume);
	system("PAUSE");
return 0;
}
