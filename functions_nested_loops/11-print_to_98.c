#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all number that exist between n and 98
 *
 * @n: take int value
 *
 * no return because of void
 */

void print_to_98(int n)
{

	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
