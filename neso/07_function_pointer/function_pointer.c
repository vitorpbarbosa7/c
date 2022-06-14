#include <stdio.h>

/* function which returns integer pointer data type*/
int* fun()
{
	int num = 10;
	/* Returning address from local variable, what is freed, than, gives segmentation fault*/
	return &num;
}

int main() {
	int *pointer = NULL;
	/* returns integer pointer */
	pointer = fun();
	printf("%d", *pointer);
	return 0;
}
