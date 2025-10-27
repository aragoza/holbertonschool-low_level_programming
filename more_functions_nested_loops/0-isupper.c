#include "main.h"

/**
 * _isupper - function that says if c i in uppercase
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
