#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
float a,b,c,x1,x2,delta, sqr;

printf("\n Digite o valor de A:");
scanf("%f", &a);
printf("\n Digite o valor de B:");
scanf("%f", &b);
printf("\n Digite o valor de C:");
scanf("%f", &c);
delta = (b*b) - (4*a*c);
sqr=sqrt(delta);
if (delta < 0){
	printf("\n O delta � negativo!");
}
else{
x1=(-b+sqr)/(2*a);
x2= (-b-sqr)/(2*a);
printf("\n O valor de X1 da equa��o � de: %f",x1);
printf("\n O valor de X2 da equa��o � de: %f",x2);
}
system("PAUSE");
return 0;
}
