#include <stdio.h>
#include <stdlib.h>

int main()
{
	double num1;
	double num2;
	double sum;
	double sub;
	
	printf("Enter 1st number: ");
	scanf("%lf", &num1);
	printf("\n\n");

	printf("Enter 2nd number: ");
	scanf("%lf", &num2);

	sum = num1 + num2;
	sub = num2 - num1;

	printf("\n\n");
	printf("sum is : %f", sum);

	printf("\n\n");
	printf("sub is : %f", sub);
	
	return 0;
}
