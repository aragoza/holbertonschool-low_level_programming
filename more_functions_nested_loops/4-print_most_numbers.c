#include "main.h"

/**
 * print_most_numbers - print the digit except 2 and 4
 *
 * no return because of void for the output
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if ((c == '2') || (c == '4'))
		{
			c++;
		}
		else
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
