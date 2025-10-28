#include "main.h"

/**
 * print_line - print a line white n '_'
 * @n: is the number of '_' that will be print
 * no return because of void for the output
 */

void print_line(int n)
{

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
