#include <stdio.h>
#include <stdlib.h>


void sayHi(); //function signature, that is what the compiler needs

int main()
{	
	int hopper_age = 85;
	int turing_age = 41;
	int shannon_age = 84;	

	char scientistzero[20] = "Turing";
	char scientistone[20] = "Grace Hopper";
	char scientisttwo[20] = "Claude Shannon";

	printf("Top \n\n");
	sayHi(scientistzero, turing_age);
	sayHi(scientistone, hopper_age);
	sayHi(scientisttwo, shannon_age);
	printf("Bottom \n");
	return 0;
}

void sayHi(char name[],int age){
	printf(" %s died when was %d years old \n\n", name, age);
}
