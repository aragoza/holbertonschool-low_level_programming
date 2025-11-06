#include "main.h"

/**
 * _sqrt_recursion - make square root of n
 *
 * @n: int will be square root
 *
 * Return: (i) the square root (-1) if there is no sqrt or n negative and 0 for 0
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
