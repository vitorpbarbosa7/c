#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n;
	printf("Enter the number of integers: ");
	scanf("%d", &n);
	int *pointer = (int *)malloc(n*sizeof(int));

	if(pointer == NULL) {
		printf("Memory not available.");
		exit(1);
	}
	for(i=0; i<n; i++) {
		printf("Enter an integer: ");
		/* Goes to other memory address ahead so that the the value can be stored in next location */
		scanf("%d", pointer + i);
	}
	for(i=0; i<n; i++){
		printf("Address %p and value %d\n", (pointer + i), *(pointer + i));
	}
	return 0;
}
