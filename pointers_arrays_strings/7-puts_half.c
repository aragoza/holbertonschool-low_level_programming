#include "main.h"

/**
 * puts_half - print half of a string
 *
 * @str: is the string parameter
 *
 * no return because of void
 */

void puts_half(char *str)
{
	int i, j;


	for (i = 0; *(str + i) != '\0'; i++)
	{
	}
	if (i % 2 == 0)
	{

		for (j = 0; j <= (i / 2); j++)
		{
			if (*(str + (i / 2) + j) != '\0')
			{
				_putchar(*(str + (i / 2) + j));
			}
		}
	}
	else
	{
		for (j = 1; j <= (i / 2); j++)
		{
			if (*(str + (i / 2) + j) != '\0')
			{
				_putchar(*(str + (i / 2) + j));
			}
		}
	}
	_putchar('\n');
}
