#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 5;
	printf("original num: %d", num);
	printf("\n\n");

	num = 8;
	printf("modified num: %d", num);
	printf("\n\n");

	const int CONST = 6;
	printf("CONSTANT NUMBER IS: %d", CONST);
	
	return 0;
}

