#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
float sg, min, hr;

printf("\n Digite os segundos:");
scanf("%f", &sg);

min = sg / 60;
hr = min / 60;
printf("\n O tempo em minutos é: %f", min);
printf("\n O tempo em horas é: %f", hr);
system("PAUSE");
return 0;
}
