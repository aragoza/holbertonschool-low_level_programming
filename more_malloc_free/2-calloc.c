#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory and set value to 0
 *
 * @nmemb: is the number of element
 *
 * @size: is the number of byte for the type
 *
 * Return: (p)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned char *p;
	void *pcalloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pcalloc = malloc(nmemb * size);
	if (pcalloc == NULL)
		return (NULL);

	p = pcalloc;

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}
