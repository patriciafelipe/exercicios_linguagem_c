#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
float nd,vh,ht,vb,vl;

printf("\n Número de dependentes:");
scanf("%f", &nd);
printf("\n Valor Hora:");
scanf("%f", &vh);
printf("\n Horas trabalhadas:");
scanf("%f", &ht);
vb = vh*ht;
printf("\n Valor Bruto: %f", vb);
vl = vb+(nd*300);
printf("\n Valor Líquido: %f", vl);

system("PAUSE");
return 0;
}
