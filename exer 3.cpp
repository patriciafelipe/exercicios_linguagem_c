#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n1,n2, soma;
	
	printf("\n Digite número 1:");
	scanf("%d", &n1);
	printf("\n Digite número 2:");
	scanf("%d", &n2);
	
	soma= n1+n2;
	if(soma >=25){
	printf("\n Soma maior que 25");
	}
	else{
	system("PAUSE");
return 0;
	}
}

