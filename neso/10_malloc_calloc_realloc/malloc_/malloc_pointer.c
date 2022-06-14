#include <stdio.h>
#include <stdlib.h>

int main()
{

	int *pointer;
	pointer = (int*)malloc(2*sizeof(int));

	if (pointer == NULL)
		printf("Memory could not be allocated");
	else
		printf("Memory allocated successfully");
		printf("\n\n");
		printf("Memory address for 2 times bigger than int would need?: %p", pointer);
	return 0;
}
