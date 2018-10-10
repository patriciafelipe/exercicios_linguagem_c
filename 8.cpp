#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
float x,n,resul, resultado;

printf("\n X:");
scanf("%f", &x);
printf("\n N:");
scanf("%f", &n);

resul = x*n;
resultado = resul*resul; 
printf("O resultado de X * N é : %f",resultado);
system("PAUSE");
return 0;
}
