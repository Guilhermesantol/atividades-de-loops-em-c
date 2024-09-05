#include <stdio.h>

int main(void){
	int numuser;

	printf("escreva um numero de 1 a 7, 1 sendo segunda e 7 domingo: ");
	scanf("%d", &numuser);
	
	switch(numuser){
		case 1: printf("domingouu");
			break;
		case 2: printf("segunda");
			break;
		case 3: printf("terca");
			break;
		case 4: printf("quarta");
			break;
		case 5: printf("quinta");
			break;
		case 6: printf("sexta");
			break;
		case 7: printf("sabadouu");
			break;
		
		default: printf("seu numero eh invalido, escreva um numero de 1 a 7 apenas");
	}
}