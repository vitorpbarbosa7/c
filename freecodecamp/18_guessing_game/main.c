#include <stdio.h>
#include <stdlib.h>

int main()
{
	int secretNumber = 42;
	int guess = 0;
	int guessLimit = 5;
	int guessCount = 0;

	while (guess != secretNumber && guessCount <= guessLimit){
	
		printf("Try to guess the number: ");
		scanf("%d", &guess);

		if (guess != secretNumber){
			printf("\n Not right, let's try again \n\n");
		}
		guessCount++;
	}
	
	if (guess == secretNumber){
		printf("You got it!");
	}
	else {
		printf("Game Lost");
	}
	return 0;
}
