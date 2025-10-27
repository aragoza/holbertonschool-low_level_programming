#include "main.h"

/**
 * print_numbers - print the digit
 *
 * no return because of void for the output
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
