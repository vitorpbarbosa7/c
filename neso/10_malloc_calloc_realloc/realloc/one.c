#include <stdio.h>

int main()
{
	int *pointer = (int *)malloc(sizeof(int));

	/* Reallocation memory */
	pointer = (int *)realloc(pointer, 2*sizeof(int));
}
