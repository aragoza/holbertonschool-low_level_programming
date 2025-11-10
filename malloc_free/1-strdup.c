#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copy an array
 *
 * @str: is the array created
 *
 * Return: (p) the array or (NULL) if the array is void
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	char *p = malloc(sizeof(str) * sizeof(char));


	if (sizeof(str) <= 0)
		return (NULL);

	for(i = 0; i <= sizeof(str) + 1; i++)
	{
		p[i] = str[i];
	}

	return (p);
}
