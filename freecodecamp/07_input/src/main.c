#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int age;
	int multiplier = 3;

	printf("Enter the Pep Guardiola Career years: ");
	scanf("%d", &age);
	printf("Guardiola will have %d trophies, when he retires", multiplier*age);

	printf("\n\n");

	char grade;
	printf("Enter your grade: ");
	scanf("%c", &grade);
	printf("Your grade is %c: ", grade);

	return 0;
}

