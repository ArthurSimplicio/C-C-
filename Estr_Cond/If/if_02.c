#include <stdio.h>

int main(){
	float m;
	printf("Insira uma nota:\n");
	scanf("%f", &m);
	
	if(m >= 5 && m < 7){
		printf("Tem direito ao exame!");
	} else if(m < 5) {
		printf("Voce foi reprovado!");
	} else{
		printf("Voce foi aprovado!");
	}
}