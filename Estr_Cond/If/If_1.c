#include <stdio.h>

int main(){
	int a, b;
	printf("insira um numero:\n");
	scanf("%d", &a);
	printf("insira outro numero:\n");
	scanf("%d", &b);
	
	if(a >b){
		printf("O maior numero e %d", a);
	}else{
		printf("O maior numero e %d", b);
	}
}