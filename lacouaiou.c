#include <stdio.h>

int main(void){

	int numuser = 1, soma = 0;
	
	while(numuser != 0){
		printf("Escreva numero para soma, e poe o zero para termina: ");
		scanf("%d", &numuser);

		soma = soma + numuser;

	}
	printf("%d", soma);


}