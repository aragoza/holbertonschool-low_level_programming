#include "main.h"

/**
 * _puts_recursion - print a string with recursion method
 *
 * @s: string pointer
 *
 * no return because void
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
