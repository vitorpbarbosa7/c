#include <stdio.h>
#include <stdlib.h>

int max();

int main()
{	
	int num1 = 34;
	int num2 = 40;
	int num3 = 10;
	
//	printf("Maximum number among %d, %d and %d is: %d", num1, num2, num3,max(num1, num2, num3));		
	
	if(num1 > num2 || num2 > num3)
	{
	printf("%d", num1); 
	}

	return 0;
}

int max(int num1, int num2, int num3)
{
	int result;

	if(num1 >= num2 && num1 >= num3)
	{
	result = num1;
	}
	else if (num2 >= num3)
	{
	result = num2;
	}
	else
	{
	result = num3;
	}
	
	return result;
}
