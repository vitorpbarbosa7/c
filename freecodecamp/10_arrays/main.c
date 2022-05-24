#include <stdio.h>
#include <stdlib.h>

int main()
{
	int luckyNumbers[10] = {42, 35, 64, 82, 34, 45, 72};
	printf("%d \n\n", luckyNumbers[0]); 

	luckyNumbers[0] = 2222;
	luckyNumbers[7] = 777;

	printf("%d \n\n", luckyNumbers[0]);
	printf("%d", luckyNumbers[7]);

	return 0;
}

