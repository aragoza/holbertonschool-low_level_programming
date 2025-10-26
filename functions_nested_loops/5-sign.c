#include "main.h"

/**
 * print_sign - says if n positive negative or zero
 *
 * Return: (1) mean positive (-1) negative (0) is zero
 *
 * @n: only one parameter
 */


int print_sign(int n)
{

	if (n >= 1)
	{
		_putchar(43);
		return (1);
	}
	else if (n <= -1)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	return (0);
}
