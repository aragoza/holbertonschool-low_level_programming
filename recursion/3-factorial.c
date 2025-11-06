#include "main.h"

/**
 * factorial - make n to the factorial
 *
 * @n: int will be to the factorial
 *
 * Return: n to the factorial
 */


int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return(n * factorial(n - 1));

}
