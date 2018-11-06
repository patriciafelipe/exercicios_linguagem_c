#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float opcao;
	
		printf("\n Digite 1 para Lanche e 2 para combo: ");
	scanf("%f", &opcao);
	if(opcao==1){
		printf("\n o Valor do lanche é: R$ 13,50");
	}
	else{
			printf("\n O Valor do combo é: R$ 25,00");
	}
	system("PAUSE");
	return 0;
}
