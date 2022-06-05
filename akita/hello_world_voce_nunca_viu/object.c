#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

struct Person {
	char name[10];
	uint8_t age;
	uint8_t height;
	void(*show)(struct Person *);
};

void person_print(struct Person *person)
{
	printf("nome: % age: %d height :

}

struct Person * newPerson(
	char name[],
	uint8_t age, 
	uint8_t height) {
	
	struct Person *person = 
		(struct Person *) malloc(sizeof(struct Person 

	strcpy(person->name, "Fabio");
	person->age = 43;
	person->height = 172;

	person>show = &person_print;
	return person;


	}
	

void printPerson(struct Person person)
{
	printf("Person: %s %d %d \n", 
			person.name, person.age, person.height);
}

int main() {
	createPerson("Fabio", 43, 172, &printPerson);
	createPerson("Fabio", 43, 172, &printPerson2);
	return 0;
}
