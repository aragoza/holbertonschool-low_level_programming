#include "main.h"

/**
 * stat_i - search for i the sqrt of n
 *
 * @i: the end sqrt of n
 *
 * @n: int will be square root
 *
 * Return: i the sqrt of n or -1
 */

int stat_i(int n, int i)
{
	if (i * i == n)
		return (i);

	else if (i * i > n)
		return (-1);

	return (stat_i(n, i + 1));
}

/**
 * _sqrt_recursion - make square root of n
 *
 * @n: the number we have to sqaure root
 *
 * Return: (i) the square root (-1) no sqrt or n negative
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (0);

	return (stat_i(n, 0));
}
