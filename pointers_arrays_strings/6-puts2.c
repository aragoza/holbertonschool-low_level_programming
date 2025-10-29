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
	int i;

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
