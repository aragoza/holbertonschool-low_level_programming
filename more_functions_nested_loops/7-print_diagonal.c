#include "main.h"

/**
 * print_diagonal - print a diagonal
 * @n: is the number of '\' and '\n' that will be print
 * no return because of void for the output
 */

void print_diagonal(int n)
{
	int m;
	while (n > 0)
	{
		for (m = 0; m >= n; m++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
}
