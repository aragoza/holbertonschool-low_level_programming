#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory of b bytes
 *
 * @b: number of bytes to allocate
 *
 * Return: (p)
 */


void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit (98);
	}

	return (p);
}
