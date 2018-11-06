#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char sexo,f,m;
	
	printf("\n Digite seu sexo:");
	scanf("%c", &sexo);
	
	if(sexo=='m'){
	  printf("\n Seja bem-vindo, Senhor!");
}
else{
 printf("\n Seja bem-vinda, Senhora!");
}
}
