#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print a contiguous list of string
 *
 * @separator: a cont string between two string
 * @n: a const uint the number of element
 *
 * no return void output
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list_string;
	char *string1;

	va_start(list_string, n);

	for (i = 0; i < n; i++)
	{
		string1 = va_arg(list_string, char *);

		if (string1 == NULL)
			printf("(nil)");
		else
			printf("%s", string1);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}

	va_end(list_string);

	printf("\n");
}
