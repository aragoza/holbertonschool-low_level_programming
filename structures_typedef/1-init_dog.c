#include "dog.h"
#include <stdlib.h>


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
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	if (*name == '\0' || *owner == '\0')
		return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}


