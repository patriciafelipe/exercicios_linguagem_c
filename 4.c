#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float cp,saldo1,saldo2,saldo3;
	
	printfn("\n  Conta Poupança: ");
	scanf("%f", &cp);
	saldo1 = cp*1.01;
	printfn("\n Saldo 1° mês: ");
	saldo1 = cp*1.01
	printfn("\n Saldo 2° mês: ");
	saldo2 = saldo1*1.01;
	printfn("\n Saldo 3° mês: ");
	saldo3 = saldo2*1.01;
	system("PAUSE");
	return 0;
}
