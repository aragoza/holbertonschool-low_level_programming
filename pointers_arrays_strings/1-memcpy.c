#include "main.h"

/**
 * _memcpy - cpy the second into the first memory area
 *
 * @dest: destination of the copy
 *
 * @src: memory copied
 *
 * @n: number of byte
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
