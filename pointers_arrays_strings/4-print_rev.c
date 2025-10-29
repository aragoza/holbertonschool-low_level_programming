#include "main.h"

/**
 * print_rev - print a string in reverse followed by a new line
 *
 * @s: is the string parameter
 *
 * no return because of void
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
