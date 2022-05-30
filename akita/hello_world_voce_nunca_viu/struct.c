#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

struct Person {
	char nome[10];
	uint8_t age;
	uint8_t height;
};

int main() {
	struct Person person;
	strcpy(person.nome, "Fabio");
	person.age = 43;
	person.height = 172;
	return 0;
}
