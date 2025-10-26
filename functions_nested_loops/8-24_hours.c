#include "main.h"

/**
 * jack_bauer - print all the time in a day
 *
 * no return because of void
 */

void jack_bauer(void)
{
	int dizh;
	int unih;
	int dizmin;
	int unimin;

	for (dizh = 0; dizh <= 2; dizh++)
	{
		for (unih = 0; unih <= 4; unih++)
		{
			for (dizmin = 0; dizmin <= 5; dizmin++)
			{
				for (unimin = 0; unimin <= 9; unimin++)
				{
					_putchar(dizh);
					_putchar(unih);
					_putchar(dizmin);
					_putchar(unimin);
					if ((dizh != 2) | (unih != 4) | (dizmin != 5) | (unimin != 9))
					{
						_putchar('\n');
					}
				}
			}
		}
	}
}
