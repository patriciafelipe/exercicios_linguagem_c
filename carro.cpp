#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float custof;
	
	printf("\n Custo de f�brica do carro:");
	scanf("%f", &custof);
	custof+(custof*0.28+0.45);
	if(custof>=10.000){
		printf("\n O Imposto do carro ser� de 45%");
	}
	else{
	printf("\n O Imposto do carro ser� de 50%");
	}
	system("PAUSE");
return 0;
	}

