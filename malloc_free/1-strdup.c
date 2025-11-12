#include <stdlib.h>
#include "main.h"


/**
 * _strlen - say the size of a string
 *
 * @s: is the string parameter
 *
 * Return: (i) the size of s
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}
	return (i);
}

/**
 * _strdup - copy an array
 *
 * @str: is the array created
 *
 * Return: (p) the array or (NULL) if the array is void
 */

char *_strdup(char *str)
{
	unsigned int i = 0, len = _strlen(str);
	char *p = malloc((len + 1) * sizeof(char));


	if (len == 0)
	{
		return (NULL);
	}

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}

	return (p);
}
