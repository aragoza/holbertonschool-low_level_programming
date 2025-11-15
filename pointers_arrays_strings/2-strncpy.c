#include "main.h"

/**
 * _strncpy - copy a string followed by a new line
 *
 * @dest: is the first parameter
 *
 * @src: is the second parameter
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && (*(src + i) != '\0'); i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
