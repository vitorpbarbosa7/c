#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
	char name[50];
	char major[50];
	int age;
	double gpa;
};


int main()
{
	struct Student student1;
	student1.age = 22;
	student1.gpa = 3.2;
	strcpy( student1.name, "Jim");
	strcpy( student1.major, "Business");

	printf("Struct Student gpa parameter is: %f \n", student1.gpa);
	printf("Struct Student name parameter is: %s \n\n", student1.name);
	
	struct Student student2;
	student2.age = 34;
	student2.gpa = 3.4;
	strcpy( student2.name, "Mona");
	strcpy( student2.major, "Nothing");

	printf("Struct Student gpa parameter is: %f \n", student2.gpa);
	printf("Struct Student name parameter is: %s \n", student2.name);



	return 0;
}
