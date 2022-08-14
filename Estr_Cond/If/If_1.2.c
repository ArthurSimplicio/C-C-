#include <stdio.h>

int main(){
	int n;
	
	printf("Insira um numero:\n");
	scanf("%d", &n);
	
	if(n < 0){
		printf("O numero %d e negativo!", n);
	}else{
		printf("O numero %d e positivo!", n);
	}
}