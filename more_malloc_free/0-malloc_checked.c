#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concat two string in an alloc memory
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: (p) the concat or (NULL) if the 2 array are void
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
