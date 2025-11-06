#include "main.h"

/**
 * _pow_recursion - make x to the power of y
 *
 * @x: int will be to the power of y
 *
 * @y: int will the number of time x mutliply itself
 *
 * Return: x to the power of y
 */


int stat_i(int n, int i)
{
	if (i * i == n)
		return (i);

	else if (i * i > n)
		return (-1);

	return (stat_i(n, i + 1));
}



int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (0);

	return (stat_i(n, 0));
}
