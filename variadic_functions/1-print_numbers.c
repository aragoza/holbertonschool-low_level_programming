#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print a list of number
 *
 * @separator: string between two number
 * @n: const int is the number of arg in the list 
 *
 * no return because void output
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list_of_number;

	va_start(list_of_number, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list_of_number, int));
	
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(list_of_number);

	printf("\n");
}
