#include <stdio.h>

int main()
{
	/* explicitly allocate the memory and put the values in the allocated memory */
	int *p = (int *)malloc(sizeof(int));
	*p = 10;
	free(p);
	return 0;
}
