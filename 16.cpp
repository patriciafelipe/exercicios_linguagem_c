#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n;
	printf("\n Digite um n�mero:");
	scanf("%d",&n);
	printf("\n N�mero antecessor: %d",(n-1));
	printf("\n N�mero sucessor: %d",(n+1));
	
	system("PAUSE");
return 0;
}
