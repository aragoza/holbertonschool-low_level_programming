#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * no return because of void for the output
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		if (i <= 9)
		{
			_putchar('\n');
		}
	}
}
