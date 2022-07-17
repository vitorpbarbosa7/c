#include <stdio.h>

struct abc {
	int a;
	char b;
};

int main(){
	// declaring two arrays with struct abc data type
	struct abc arr[2] = {{1, 'A'}, {2, 'B'}};
	
	int i;	
	for(i=0; i <2; i++){	
		printf("%d", arr[i].a);
		printf("\n");
		printf("%c", arr[i].b);
		printf("\n");
	}
	return 0;
}
// compiler will allocate contiguous block of memory for the data members of the structure
