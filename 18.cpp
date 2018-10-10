#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a, b, aux;
	
	printf("\n Valor de A:");
	scanf("%d", &a);
		printf("\n Valor de B:");
	scanf("%d", &b);
	
	aux =a;
	a=b;
	b=aux; 
	
	 printf("a = %d \n", a);
    printf("b = %d \n", b);
    
	system("PAUSE");
return 0;
}
