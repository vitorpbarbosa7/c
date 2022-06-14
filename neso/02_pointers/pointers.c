#include <stdio.h>
#include <stdlib.h>

int main() {

	int a = 2;
	void *pointera;
	int *intpointera;
	
	pointera = &a;
	intpointera = &a;

	printf("Froim void pointer %p", pointera);
	printf("\n\n");
	printf("From int pointer %p", intpointera);
	printf("\n\n");
	printf("Typecasted pointer %d", *intpointera);
	printf("\n\n");
	printf("Integer pointer %d", *(int*)pointera);

}
