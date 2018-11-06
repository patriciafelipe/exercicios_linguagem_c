#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
char sexo,homens, mulheres;
float altura;

	printf("\n Altura:");
	scanf("%f", &altura);
	
	printf("\n Sexo:");
	scanf("%c", &sexo);
	
	 if (sexo='homem'){
	  homens= (72.7*altura)-58;	
	  printf("\n Seu peso ideal é: %f",homens);
	 }
	else
	if(sexo = 'feminino'){
		 mulheres=(62.1*altura)-44.7;
	 printf("\n Seu peso ideal é %f", mulheres);	
	}
 
 system("PAUSE");
return 0;
}
