#include <stdio.h>

int main(){
	char s;
	printf("Qual o seu sexo?\n");
	scanf("%s", &s);
	
	if(s == 'm'){
		printf("M - Masculino");
	} else if( s == 'f'){
		printf("F - Feminino");
	}else{
		printf("Sexo Invalido!");
	}
}