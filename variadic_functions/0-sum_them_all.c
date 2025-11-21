#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - somme des n arguments en parametre
 *
 * @n: n est le nombre d'arguments qu'il est possible d'input
 *
 * Return: (somme) la somme des arguments passés
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i; 
	int somme;
	va_list elem_somme;

	if (n == 0)
	{
		return (0);
	}

	va_start(elem_somme, n);

	somme = 0;

	for (i = 0; i < n; i++)
	{
		somme += va_arg(elem_somme, int);
	}
	va_end(elem_somme);

	return (somme);
}
