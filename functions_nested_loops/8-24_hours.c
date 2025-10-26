#include "main.h"

/**
 * jack_bauer - print all the time in a day
 *
 * no return because of void
 */

void jack_bauer(void)
{
	char dizh;
	char unih;
	char dizmin;
	char unimin;

	for (dizh = '0'; dizh <= '1'; dizh++)
	{
		for (unih = '0'; unih <= '9'; unih++)
		{
			for (dizmin = '0'; dizmin <= '5'; dizmin++)
			{
				for (unimin = '0'; unimin <= '9'; unimin++)
				{
					_putchar(dizh);
					_putchar(unih);
					_putchar(':');
					_putchar(dizmin);
					_putchar(unimin);
					if ((dizh != '2') | (unih != '4') | (dizmin != '5') | (unimin != '9'))
					{
						_putchar('\n');
					}
				}
			}
		}
	}


	for (dizh = '2'; dizh <= '2'; dizh++)
        {
                for (unih = '0'; unih <= '4'; unih++)
                {
                        for (dizmin = '0'; dizmin <= '5'; dizmin++)
                        {
                                for (unimin = '0'; unimin <= '9'; unimin++)
                                {
                                        _putchar(dizh);
                                        _putchar(unih);
                                        _putchar(':');
                                        _putchar(dizmin);
                                        _putchar(unimin);
                                        if ((dizh != '2') | (unih != '4') | (dizmin != '5') | (unimin != '9'))
                                        {
                                                _putchar('\n');
                                        }
                                }
                        }
                }
        }
}
