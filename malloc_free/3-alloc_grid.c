#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array
 *
 * @size: is the size of the array created
 *
 * @c: is the constant variable that will replace all the byte
 *
 * Return: (ar) the array or (NULL) if the array is void
 */


int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (height <= 0 || width <= 0)
		return NULL;

	p = malloc(height * sizeof(int*));

	for(i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));

		for(j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}

	}

	return (p);
}
