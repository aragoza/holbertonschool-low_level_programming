#include "main.h"

/**
 * _strcat - concat 2 string followed by a null byte
 *
 * @dest: is the first parameter
 *
 * @src: is the second parameter
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
	}

	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(dest + i + j) = *(src + j);
	}

	*(dest + i + j) = '\0';

	return (dest);
}
