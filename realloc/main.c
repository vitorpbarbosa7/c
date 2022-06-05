#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int *pointer = (int *)malloc(2*sizeof(int));
	
	if (pointer == NULL){
		printf("Memory not available.");
		exit(1);
	}

	printf("Enter the two numbers: \n");
	for (i=0; i<2; i++){
		scanf("%d", pointer+i);
	}

	// Memory allocation for more two integers
	pointer = (int *)realloc(pointer, 4*sizeof(int));
	if (pointer == NULL){
		printf("Memory not available!");
		exit(1);
	}

	printf("Enter 2 more integers: \n");
	for (i=2; i<4; i++){
		scanf("%d", pointer+i);
	}

	// Printin the values in the screen
	for (i=0; i<4; i++){	
		printf("Memory address: %p - Value: %d\n", (pointer+i), *(pointer+i));
	}

	return 0;
}

