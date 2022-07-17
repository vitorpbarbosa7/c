#include <stdio.h>
#include <stdlib.h>
struct point {
	int x;
	int y;
};

//Returns pointer to a struct
struct point* fun(int a, int b){
	// a and b are allocated automatically in stack memory, and when function execution is finished, is automatically deallocated
	
	// the size of allocated memory is depending on the size of generic default struct, that we created before, the struct point
	// the name of this struct pointer is ptr
	
	// malloc returns a void pointer, that is why it need to by typecasted with (struct point *) to struct point pointer 
	// passing values to the heap memory
	// if it was stack memory, could be automatically allocated by the compiler ? 
	struct point *ptr = (struct point *)malloc(sizeof(struct point));
	
	// the struct point data type, has a x and y attributes, that their memory locations will be pointed to a and b which are inputs of this function
	// arrow operator
	ptr->x = a;
	ptr->y = b + 5;
	return ptr;
}

// Function which receives as argument a struct pointer, hence, we will need to use, further ahead, the struct point* fun (function) created before as an input
void print(struct point *ptr) {
	printf("%d %d\n", ptr->x, ptr->y);
}

int main() {
	// Creating two struct pointers
	struct point *ptr1, *ptr2;
	
	// Struct pointer ptr1 receives the output from fun(), since fun returns pointer to struct, with, meanwhile, setting the attribute values
	ptr1 = fun(2,3);
	ptr2 = fun(6,9);

	print(ptr1);
	print(ptr2);

	// Once used, free this memory	
	free(ptr1);
	free(ptr2);
	
	return 0;
}


