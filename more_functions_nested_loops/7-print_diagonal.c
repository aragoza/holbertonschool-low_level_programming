#include "main.h"

/**
 * print_diagonal - print a diagonal
 * @n: is the number of '\' and '\n' that will be print
 * no return because of void for the output
 */

void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		int j = 0;

		while (j <= i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
