#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num;
	
	printf("\n Digite número:");
	scanf("%d", &num);
	
	if(num%2==0){
	printf("\n O número é par");
}
	else{
	printf("\n O Número é impar");
}
	 system("PAUSE");
return 0;
}
