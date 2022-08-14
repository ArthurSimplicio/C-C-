#include <stdio.h>

int main(){
	float n1, n2, m;
	
	printf("Insira uma nota:\n");
	scanf("%f", &n1);
	printf("Insira outra nota:\n");
	scanf("%f", &n2);
	
	m = (n1 + n2)/2;
	printf("Sua media foi %.1f!\n", m);

	if(m >= 10){
		printf("Aprovado com distincao!");
	}else if(m >= 7){
		printf("Aprovado!");
	}else{
		printf("Reprovado!");
	}
	
}