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
 * str_concat - concat two string in an alloc memory
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: (p) the concat or (NULL) if the 2 array are void
 */


char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1, len2;
	char *p;
	i = 0;
	j = 0;
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	p = malloc((len1 + len2 + 1) * sizeof(char));

	if (len1 + len2 <= 0)
		return (NULL);

	while(i < len1)
	{
		p[i] = s1[i];
		i++;
	}
	while(j < len2)
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';

	return (p);
}
