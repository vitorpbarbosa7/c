#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int limit = 20;
	char name[limit];
	printf("Enter your favorite Master: ");
	fgets(name, limit, stdin);
	printf("Your master class is: %s", name);

	return 0;
}
