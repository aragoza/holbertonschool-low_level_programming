#include "main.h"

/**
 * _memset - allocates b to pointer s in n place of &s
 *
 * @s: pointer char that take n time constant b
 *
 * @b: constant that will be append to all s adress
 *
 * @n: the first n adress of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
