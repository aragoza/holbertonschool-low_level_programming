#include "main.h"

/**
 * factorial - make n to the factorial
 *
 * @n: int will be to the factorial
 *
 * Return: n to the factorial
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
