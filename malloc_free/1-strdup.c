#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - copy an array
 *
 * @str: is the array created
 *
 * Return: (p) the array or (NULL) if the array is void
 */

char *_strdup(char *str)
{
	unsigned int i = 0, len = strlen(str);
	char *p = malloc((len + 1) * sizeof(char));


	if (len <= 0)
		return (NULL);

	for(i = 0; i < len; i++)
	{
		p[i] = str[i];
	}

	return (p);
}
