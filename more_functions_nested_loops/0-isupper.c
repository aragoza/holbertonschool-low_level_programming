#include "main.h"

/**
 * _islower - function that says if c i in lowercase
 *
 * Return: (1) means c is in uppercase (0) if not
 *
 * @c: only one parameter
 */


int _isupper(int c)
{

	if (('A' <= c) && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
