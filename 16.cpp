#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n;
	printf("\n Digite um número:");
	scanf("%d",&n);
	printf("\n Número antecessor: %d",(n-1));
	printf("\n Número sucessor: %d",(n+1));
	
	system("PAUSE");
return 0;
}
