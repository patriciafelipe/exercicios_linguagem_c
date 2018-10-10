#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
float nt1,nt2,nt3,nt4,media;
char na;

printf("\n Nome do Aluno:");
scanf("%s", &na);
printf("\n 1° Bimestre:");
scanf("%f", &nt1);
printf("\n 2° Bimestre:");
scanf("%f", &nt2);
printf("\n 3° Bimestre:");
scanf("%f", &nt3);
printf("\n 4° Bimestre:");
scanf("%f", &nt4);
media = (nt1+nt2+nt3+nt4)/4;
printf("Média Anual: %f", media);

system("PAUSE");
return 0;
}
