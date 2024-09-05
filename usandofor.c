#include <stdio.h>

int main(void){
	int numuser, i = 1, soma = 0;
	printf("Escreva um numero para fazermos somas ate o mesmo: ");
	scanf("%d", &numuser);
	printf("seu numero eh %d\n", numuser);
	
	if(numuser < 0){
			printf("Erro!!!, escreva um numero inteiro positivo");
	}
	for(; i <= numuser; i++){
		soma = soma + i;
	}
	printf("O valor total eh: %d\n", soma);
	return 0;

}