#include <stdlib.h>
#include "main.h"

/**
 *
 *
 *
 *
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar = malloc(size * sizeof(char));


	if (size <= 0)
		return (NULL);

	for(i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
