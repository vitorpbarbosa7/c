#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
	char name;
	int mark;
};

void keyValuePair(char* name, int* mark){
	scanf("%c %d", name, mark);
}

int main(){
	struct Student student_one;
	keyValuePair(&student_one.name, &student_one.mark);
	printf("%s %d", &student_one.name, student_one.mark);
	return 0;
}
