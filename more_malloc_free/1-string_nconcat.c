#include <stdlib.h>
#include "main.h"


/**
 * string_nconcat - concat two string in an alloc memory
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: number of char take of s2
 *
 * Return: (p)
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != s2[n] && s2[len2] != '\0')
	{
		len2++;
	}

	p = malloc((len1 + len2 + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0' && s2[j] != s2[n])
	{
		p[i + j] = s2[j];
		j++;
	}

	p[i + j] = '\0';


	return (p);
}
