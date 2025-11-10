#include <stdlib.h>
#include "main.h"
#include <string.h>


/**
 * create_array - create an array
 *
 * @size: is the size of the array created
 *
 * @c: is the constant variable that will replace all the byte
 *
 * Return: (ar) the array or (NULL) if the array is void
 */


char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1, len2;
	char *p;
	i = 0;
	j = 0;
	len1 = strlen(s1);
	len2 = strlen(s2);
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
