#include <stdio.h>

int main()
{	
	/* not initialized pointer */
	int *p;
	/* trying to dereference pointer which was not initialized propertly */
	*p = 10;
	return 0;
}
