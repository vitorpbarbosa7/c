#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

struct Person {
	char name[10];
	uint8_t age;
	uint8_t height;
};

void createPerson(
	char name[], 
	uint8_t age, 
	uint8_t height, 
	void(*function_pointer)(struct Person)) {

	struct Person person;
	strcpy(person.name, "Fabio");
	person.age = 43;
	person.height = 172;

	(*function_pointer)(person);

	}
	

void printPerson(struct Person person)
{
	printf("Person: %s %d %d \n", 
			person.name, person.age, person.height);
}

void printPerson2(struct Person person)
{
	printf("Person: %s, age %d: and height: %d \n", 
			person.name, person.age, person.height);
}

int main() {
	createPerson("Fabio", 43, 172, &printPerson);
	createPerson("Fabio", 43, 172, &printPerson2);
	return 0;
}
