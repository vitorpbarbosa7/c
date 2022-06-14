#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *pointer = (int *)malloc(sizeof(int));
	
	free(pointer);
	/* Reinitiliaze the pointer with NULL value, which is 0, special 0 for null pointer values, not integer 0, different */
	pointer = NULL;
	return 0;
}
