#include "main.h"

/**
 * print_last_digit - print the last digit of a number n
 *
 * Return: n in absolute value
 */

int print_last_digit(int n)
{

	if (n >= 1)
	{
		n = (n % 10);
		return (n);
	}
	else if (n <= -1)
	{
		n = ((-n) % 10);
		return (n);
	}

	return (0);
}
