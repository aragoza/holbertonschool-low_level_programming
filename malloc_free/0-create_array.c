#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array
 *
 * @size: is the size of the array created
 *
 * @c: is the constant variable that will replace all the byte
 *
 * Return: (ar) the array or (NULL) if the array is void
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar = malloc(size * sizeof(char));

	if (size <= 0)
		return (NULL);

	if (ar == NULL)
		free (ar);

	for(i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
