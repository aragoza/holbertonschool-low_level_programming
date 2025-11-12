#include "main.h"
#include <stdlib.h>

/**
 * free_grid : free the memory of a 2d array
 *
 * @grid : is a 2d array
 *
 * @height: is the number of row in grid
 *
 * Return: no return because void
 */



void free_grid(int **grid, int height)
{

	while(height != 0)
	{
		height--;
		free(grid[height]);
	}

	free(grid);
}
