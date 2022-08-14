#include <stdio.h>

int main(){
	int A, B, soma, sub, mult, divi;
	
	printf("Digite um numero:\n");
	scanf("%d", &A);
	
	printf("Digite outro numero:\n");
	scanf("%d", &B);
	
	soma = A + B;
	sub = A - B;
	mult = A * B;
	divi = A / B;
	
	printf("Resultados:\n");
	printf("Soma: %d\n", soma);
	printf("Subtr %d\n", sub);
	printf("Multiplic.: %d\n", mult);
	printf("Divis.: %d\n", divi);
	
}