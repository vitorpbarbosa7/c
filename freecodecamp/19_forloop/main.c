#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int secretNumber = 42;
	int guess = 0;
	int guessLimit = 5;
	int index;
	
	for (index = 1; index <= guessLimit; index++) {
		
		printf("\n Try to guess the number: ");
		scanf("%d", &guess);
		
		if (guess == secretNumber){
			printf("\n You got it!\n ");
			return 0;	
		}
		else {
			printf("\n\n Try again\n\n");
		}
	}
		
	printf("Game over");
	return 0;
}
