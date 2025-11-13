#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocate memory to an array of max - min element
 *
 * @min: start value
 *
 * @max: end value
 *
 * Return: (p)
 */

int *array_range(int min, int max)
{
	int *p;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);

	while (min < max)
	{
		p[min] = min;
		min++;
	}

	p[min] = min;

	return (p);
}
