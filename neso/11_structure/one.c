#include <stdio.h>

struct student {
	char name[50];
	int age;
	int roll_no;
	float marks;
};

int main() {
	struct student student_one = {"Nick", 16, 50, 72.5};
	printf("%s, %d, %d, %f", student_one.name, student_one.age, student_one.roll_no, student_one.marks);
	return 0;
}
