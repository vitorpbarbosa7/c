#include <stdio.h>
#include <stdlib.h>

int main()
{	
	//Create pointer variable to store age
	int age = 30;
	int * pAge = &age;
	
	double gpa = 3.4;
	double * pGpa = &gpa;

	char grade = 'A';
	char * pGrade = &grade;

	printf("age's pointer %p \n", pAge);
	printf("gpa's pointer %p \n", pGpa);
	printf("grade's pointer %p \n", pGrade);

	printf("\n\n Dereferencing pointers:  \n\n");

	printf("Actual value of age: %d", *pAge);
	printf("\nActual value of gpa: %f", *pGpa);
	printf("\nActual value of grade: %c", *pGrade);

	return 0;
}
