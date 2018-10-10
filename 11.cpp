#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
float cm, m, mm, dcm;

printf("\n Digite a medida em centimetros:");
scanf("%f", &cm);
m=cm/100;
mm=cm/0.10000;
dcm = cm/10;
printf("\n A medida em Metros é:%f", m,"Metros");
printf("\n A medida em Milímetros é:%f", mm,"Milimetros");
printf("\n A medida em Decímetros é:%f", dcm,"Decímetros");

system("PAUSE");
return 0;
}
