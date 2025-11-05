#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int result;

	result = 0;

	for (i = 0; i < size; i++)
	{
		result += a[i * size + i];
	}
	printf("%d, ", result);

	result = 0;

	for (i = 0; i < size; i++)
	{
		result += a[i * size + size - i - 1];
	}

	printf("%d", result);

	printf("\n");
}
