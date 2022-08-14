#include <stdio.h>

int main(){
	float m;
	printf("Insira uma nota:\n");
	scanf("%f", &m);

	if(m >= 6){
	printf("Aprovado!");
	}else{
	printf("Reprovado!");	
	}	
}