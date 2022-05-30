#include <stdio.h>
#include <stdlib.h>

int main()
{	
	/*
	file modes
	r: read
	w: write
	a: append
	*/	

	FILE * filePointer = fopen("employees.txt", "w");
	
	fprintf(filePointer, "Jim, Salesman, \n Pam, Receptionist \n Oscar, Accounting");	
	

	fclose(filePointer);
	return 0;
}
