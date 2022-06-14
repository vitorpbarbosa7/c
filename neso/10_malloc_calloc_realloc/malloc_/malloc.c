#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{	
	char *str;

	/* Initial memory allocation */
	str = (char *) malloc(15);
	strcpy(str, "tutorialspoint");
	printf("String value = %s \n\n, String Address = %p\n\n", str, &str);
}
