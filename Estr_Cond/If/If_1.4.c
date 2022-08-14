#include <stdio.h>

int main(){
	char l;
	printf("Insira uma letra:\n");
	scanf("%s", &l);
	
	if(l == 'a' || l == 'A' || l == 'e' || l == 'E' || l == 'i' 
	|| l == 'I' || l == 'o' || l == 'O' || l == 'u' || l == 'U'){
		
		printf("\tVogal...\n");
	}else if(l == '1' || l == '2' || l == '3' || l == '4' || l == '5' 
	|| l == '6' || l == '7' || l == '8' || l == '9' || l == '0'){
		printf("\tNao e uma letra!\n");	
	}else{
		printf("\tConsoante...\n");
	}
}