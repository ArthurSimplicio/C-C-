#include <stdio.h>

int main(){
	printf("==========================\n");
	printf("==========================\n");
	printf("     CRIANCA ESPERANCA    \n");
	printf("==========================\n");
	printf("==========================\n");
	printf("Digite 1 para doar R$ 5\n");
	printf("Digite 2 para doar R$ 10\n");
	printf("Digite 3 para doar R$ 20\n");
	printf("Digite 4 para doar outro valor\n");
	
	int n, d;
	scanf("%d", &n);
	
	switch(n){
		case 1:
			printf("Voce doou 5 reais!\n");
			printf("OBRIGADO POR DOAR!");
			break;
		case 2:
			printf("Voce doou 10 reais!\n");
			printf("OBRIGADO POR DOAR!");
			break;
		case 3:
			printf("Voce doou 20 reais!\n");
			printf("OBRIGADO POR DOAR!");
			break;
		case 4:
			printf("Qual valor deseja doar?:\n");
			scanf("%d", &d);
			printf("Voce doou RS %d reais!\n", d);
			printf("OBRIGADO POR DOAR!");
			break;
		default:
			printf("ERRO!!!VALOR INVALIDO!!!");
			break;
	}
}