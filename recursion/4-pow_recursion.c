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


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
