#include "main.h"
/**
 * jack_bauer - print all the time in a day
 *
 * no return because of void
 */

void times_table(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			if (n2 == 0)
			{
				_putchar('0');
			}
			else
			{
				if ((n1 * n2) >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + ((n1 * n2) / 10));
					_putchar('0' + ((n1 * n2) % 10));
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + ((n1 * n2) % 10));
				}
			}
		}
		_putchar('\n');
	}
}
