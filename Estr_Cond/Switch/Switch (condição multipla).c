#include <stdio.h>

int main(){
	int d;
	
	printf("Insira um numero:\n");
	scanf("%d", &d);
	
	switch (d){
	 case 0:
	 	printf("Domingo");
	 	break;
	 case 1:
	 	printf("Segunda-feira");
	 	break;
	 case 2:
	 	printf("Terça-feira");
	 	break;
	 case 3:
	 	printf("Quarta-feira");
	 	break;
	 case 4:
	 	printf("Quinta-feira");
	 	break;
	 case 5:
	 	printf("Sexta-feira");
	 	break;
	 case 6:
	 	printf("Sabado");
	 	break;
	 default:
	 	printf("numero invalido!");
	 	break;
	}
}