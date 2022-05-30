#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int columns = 3;	
	int rows = 4;
	
	int nums[3][4] = {
		{1,2,3,4},
		{2,3,4,5},
		{3,4,5,6}	
		};
	
	int i, j;	

	for (i = 0; i < columns; i++){
		for(j = 0; j < rows; j++){
			printf("%d \n", nums[i][j]);
		}
	}


	return 0;
}
