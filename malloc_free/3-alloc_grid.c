#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for an array
 *
 * @width: is the length of the array created
 *
 * @height: is the number of column
 *
 * Return: (p)
 */


int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (height <= 0 || width <= 0)
	{
		return NULL;
	}

	p = malloc(height * sizeof(int*));

	if (p == NULL)
	{
		free(p);
		return NULL;
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));

		if (p[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				free(p[i]);
			}
			free(p);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}

	}

	return (p);
}
