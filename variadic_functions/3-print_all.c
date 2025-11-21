#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print all format type 
 *
 * @format: a const pointer to an array (char *)
 * that hold all type in it
 *
 * no return because void
 */

void print_all(const char * const format, ...)
{
	va_list list_all;
	int i = 0;
	char *string1;
	char c;
	char *separate = "";

	va_start(list_all, format);

	while (format != NULL && format[i] != '\0')
	{
		c = format[i];

		if (c == 'c' || c == 'i' || c == 'f' || c == 's')
		{
			printf("%s", separate);

			if (c == 'c')
				printf("%c", va_arg(list_all, int));

			if (c == 'i')
				printf("%d", va_arg(list_all, int));

			if (c == 'f')
				printf("%f", (double)va_arg(list_all, double));

			if (c == 's')
			{
				string1 = va_arg(list_all, char *);
				if (string1 == NULL)
					printf("(nil)");
				if (string1 != NULL)
					printf("%s", string1);
			}

			separate = ", ";
		}
		i++;
	}

	va_end(list_all);
	printf("\n");
}
