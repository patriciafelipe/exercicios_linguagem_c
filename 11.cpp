#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
float cm, m, mm, dcm;

printf("\n Digite a medida em centimetros:");
scanf("%f", &cm);
m=cm/100;
mm=cm/0.10000;
dcm = cm/10;
printf("\n A medida em Metros �:%f", m,"Metros");
printf("\n A medida em Mil�metros �:%f", mm,"Milimetros");
printf("\n A medida em Dec�metros �:%f", dcm,"Dec�metros");

system("PAUSE");
return 0;
}
