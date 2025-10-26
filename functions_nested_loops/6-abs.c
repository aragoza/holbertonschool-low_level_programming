#include "main.h"

/**
 * _abs - give absolute value of n
 *
 * Return: (n) the distance when positive (-n) negative (0) when zero
 *
 * @n: only one parameter
 */


int _abs(int n)
{

	if (n >= 1)
	{
		return (n);
	}
	else if (n <= -1)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
