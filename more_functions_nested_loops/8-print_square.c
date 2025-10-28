#include "main.h"

/**
 * print_square - print square of size 'size'
 * @size: is the number of column and line that will be print
 * no return because of void for the output
 */

void print_square(int size)
{
	int c;
	int l;

	for (c = 1; c <= size; c++)
	{
		for (l = 1; l <= size; l++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
