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
	unsigned char *pcalloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pcalloc = malloc(nmemb * size);
	if (pcalloc == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		pcalloc[i] = 0;

	return (pcalloc);
}
