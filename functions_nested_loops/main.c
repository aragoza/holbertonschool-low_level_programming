#include "main.h"

/**
 * print_alphabet - definition of a function that print the alphabet
 *
 * putchar - print char 1 by 1
 *
 * no return because the function is define with void that is also a return in sort
 */


void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
}
