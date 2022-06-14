#include <stdio.h>
#include <stdlib.h>

// Good practice for structures which are big in size
struct point {
	int x;
	int y;
};

//Receives struct address as argument, instead of struct variable, which would be a copy
//and would be memory consuming
void print(struct point *ptr){
	printf("%d %d\n", ptr->x, ptr->y);
}

int main(){
	struct point p1 = {23, 45};
	struct point p2 = {56, 90};
	
	// Passing the struct pointer (address), instead of the variable
	print(&p1);
	print(&p2);
	return 0;
}
