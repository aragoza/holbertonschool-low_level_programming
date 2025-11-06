#include "main.h"

/**
 * check_prime - check if n is prime
 *
 * @i: number that divise n to know if prime
 *
 * @n: number that we want to know if prime
 *
 * Return: (0) if not prime (1) if it is prime
 */

int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);

	else if ((n % i) == 0)
		return (0);

	return (check_prime(n, i + 1));
}

/**
 * _is_prime_number - detect if n is prime
 *
 * @n: the number we have to check if prime
 *
 * Return: (0) if not prime (1) if prime
 */


int is_prime_number(int n)
{
	if (n < 0)
		return (0);

	else if (n == 0 || n == 1)
		return (1);

	return (check_prime(n, 2));
}
