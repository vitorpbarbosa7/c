#include <stdio.h>

void f3(char hello[]) {
	printf("%p\n", &hello);
	f3(hello);
}


int main() {

	char hello[] = "Hello World";
	printf("from main: %p\n", &hello);
	f3(hello);

	return 0;
}
