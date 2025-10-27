#include "main.h"

/**
 * more_numbers - print ten times the number from 0 to 14
 *
 * no return because of void for the output
 */

void more_numbers(void)
{
	char c[] = "01234567891011121314";
	int i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 19; i++)
		{
			_putchar(c[i]);
		}
		_putchar('\n');
	}
}
