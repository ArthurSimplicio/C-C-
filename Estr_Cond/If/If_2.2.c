#include <stdio.h>

int main(){
	int a, b, c;
	printf("Insira 3 numeros:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a > b && a > c && b < c){
		printf("O maior numero e %d.\nE o menor numero e %d.", a, b);
	}else if(a > b && a > c && c < b){
		printf("O maior numero e %d.\nE o menor numero e %d.", a, c);
	}else if(b > a && b > c && a < c){
		printf("O maior numero e %d.\nE o menor numero e %d.", b, a);
	}else if(b > a && b > c && c < a){
		printf("O maior numero e %d.\nE o menor numero e %d.", b, c);
	}else if(c > a && c > b && a < b){
		printf("O maior numero e %d.\nE o menor numero e %d.", c, a);
	}else{
		printf("O maior numero e %d.\nE o menor numero e %d.", c, b);
	}
}