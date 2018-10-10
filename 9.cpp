#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
float a,b,resul, resultado;

printf("\n A:");
scanf("%f", &a);
printf("\n B:");
scanf("%f", &b);

resul = a*b;
resultado = resul/resul; 
printf("O resultado de A * B é : %f",resultado);
system("PAUSE");
return 0;
}
