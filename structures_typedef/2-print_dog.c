#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print element of structure dog
 *
 * @d: pointer to the strucure dog
 *
 * no return because void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
