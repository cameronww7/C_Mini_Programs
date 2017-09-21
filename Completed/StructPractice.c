/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										StructPractice.c
 * ---------------------------------------------------------------------------
 * Goal :
 *
 ******************************************************************************/

#include "../header.h"
#include "string.h"

#define NameLength 25

struct Person {
	int age;
	char name[NameLength];
};

struct Person PopulatePerson(struct Person xPerson);
void DisplayPerson(struct Person xPerson);

void StructPractice(void) {
	static struct Person person1;

	person1 = PopulatePerson(person1);
	DisplayPerson(person1);
}

struct Person PopulatePerson(struct Person xPerson) {
	int  age = 25;
	char name[NameLength] = "Jackson James";

	printf("\n> Please enter your age : 25 (hard coded)");
//	scanf("%d", age);
	xPerson.age = age;

	printf("\n> Please enter your name (Max Size 25 characters) : Jackson James (hard coded)");
//	fgets(name, NameLength, stdin);
	strcpy(xPerson.name, name);

	return xPerson;
}

void DisplayPerson(struct Person xPerson) {
	printf("\n> You entered %s", xPerson.name);
	printf("\n> You entered %d", xPerson.age);
}
