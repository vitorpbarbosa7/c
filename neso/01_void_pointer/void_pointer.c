#include <stdio.h>

int main() {
	int n = 10;
	void *pointer = &n;

	printf("%d", *(int*)pointer);
	return 0;
}
