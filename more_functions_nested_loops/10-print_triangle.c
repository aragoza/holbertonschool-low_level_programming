#include "main.h"

/**
 * print_triangle - print triangle of size 'size'
 * @size: is the number of column and line that will be print
 * no return because of void for the output
 */

void print_triangle(int size)
{
	int c, l, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= size; c++)
		{
			for (space = 0; space < size - c; space++)
			{
				_putchar(' ');
			}
			for (l = 0; l <= (c - 1); l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
