#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{	
	/* 
	simple 
	block
	comment 
	*/
	
	// comment, which should not be here to explain any code at all 
	
	int a = 2;
	int b = 3;
	int power = 36;
	float ceiling = 4.6;
	
	printf("%d^%d is:%f \n\n", a, b, pow(a, b));

	printf("sqrt(%d) is: %f \n\n", power, sqrt(power));

	printf("ceil(%f) is: %f \n\n", ceiling, ceil(ceiling));

	printf("floor(%f) is %f \n\n", ceiling, floor(ceiling));

	return 0;
}
