#include <stdio.h>

int main(){
	float m, n1, n2;
	printf("Digite uma nota:\n");
	scanf("%f", &n1);
	
	printf("Digite outra nota:\n");
	scanf("%f", &n2);
	m = (n1 + n2)/2;
	
	if(m >= 7){
		printf("Aprovado(a)!");
	}else{
		printf("Reprovado(a)!");
	}
}