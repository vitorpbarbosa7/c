#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age = 30;
	double gpa = 3.4;
	char grade = 'A';
	
	printf("\n memory address: %p \n\n", &age);
	printf("\n %p", (void *) &age);

	return 0;
}

