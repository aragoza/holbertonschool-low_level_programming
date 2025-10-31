#include "main.h"
#include <stdio.h>

/**
 * print_array - print a string of n size
 *
 * @a: is a string: is the string pointer parameter
 *
 * @n: is the number of element that we want to print in array a
 *
 * no return because of void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));

		if (i < (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}

