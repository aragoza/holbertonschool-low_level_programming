#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print a contiguous list of string
 *
 * @separator: a cont string between two string
 * @n: a const uint the number of element
 *
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list_string;
	char * string1;

	if (separator == NULL)
		*separator = "";

	va_start(list_string, n);

	for (i = 0; i < (n - 1); i++)
	{
		string1 = va_arg(list_string, char*);
		
		if (string1 == NULL)
			printf("(nil)%s", separator);
		
		else
			printf("%s%s", string1, separator);
	}
	printf("%s\n", va_arg(list_string, char *));
	
	va_end(list_string);
}
