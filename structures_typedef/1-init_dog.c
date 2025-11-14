#include "dog.h"

/**
 * init_dog - intialize variable of dog
 *
 * @d: pointer to initialize by a shallow copy
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

}


