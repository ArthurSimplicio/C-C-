#include <stdio.h>

int main(){
	/*int idade = 0;
	printf("Valor inicial da idade: %d\n", idade);	
	printf("Digite uma idade:\n");
	scanf("%d", &idade);	
	printf("Idade informada: %d.", idade);*/
	
	int idade = 0;
	float peso = 0.0;
	
	printf("Digite uma idade:\n");
	scanf("%d", &idade);
	printf("Digite um peso:\n");
	scanf("%f", &peso);
	
	printf("Idade informada: %d.\n", idade);
	printf("Peso informado: %.2f.\n", peso);
	
}