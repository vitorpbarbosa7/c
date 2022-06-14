#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct charset{
	char s;
	int i;
};

// receives character pointer and integer pointer, so, will not receive the variables directly, 
// but the pointers, which points for the memory address which will allocate those values
void keyValue(char* s, int* i){
	scanf("%c %d", s, i);
}

int main(){
	int j;
	struct charset cs;
	keyValue(&cs.s, &cs.i);
	printf("character value%c and integer value  %d", cs.s, cs.i);
	printf("\n\n");
	return 0;
}
	
