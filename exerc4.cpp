#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num;
	
	printf("\n Digite n�mero:");
	scanf("%d", &num);
	
	if(num%2==0){
	printf("\n O n�mero � par");
}
	else{
	printf("\n O N�mero � impar");
}
	 system("PAUSE");
return 0;
}
