#include <stdio.h>

int main(void){
	int idade, veridade, useridade;
	
	printf("escreva sua idade!!!: ");
	scanf("%d", &useridade);

	if ( useridade <= 17){
		printf("sua idade eh %d, voce eh menor de idade", useridade);
	} else if ( useridade < 60 ){
		printf("sua idade eh %d, voce eh maior de idade", useridade);
	}else if (useridade >= 60 ){
		printf("sua idade eh %d, voce eh velho parabens!!!", useridade);	
	}
	return 0;
}