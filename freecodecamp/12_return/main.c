#include <stdio.h>
#include <stdlib.h>

double cube();

int main()
{
	double num = 5;
	printf("Answer:  %.2f", cube(num));
	
	return 0;
}


double cube(double num)
{
	double result = num * num * num;
	return result;
}



