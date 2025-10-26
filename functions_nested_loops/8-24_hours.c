#include "main.h"
/**
 * jack_bauer - print all the time in a day
 *
 * no return because of void
 */

void jack_bauer(void)
{
	int h, min;

	for (h = 0; h < 24; h++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + h / 10);
			_putchar('0' + h % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');
		}
	}
}
