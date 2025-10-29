#include "main.h"

/**
 * puts2 - print a string with one character on two
 *
 * @str: is the string parameter
 *
 * no return because of void
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	i++;
	}
	_putchar('\n');
}
