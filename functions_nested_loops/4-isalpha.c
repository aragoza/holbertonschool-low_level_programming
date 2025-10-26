#include "main.h"

/**
 * _isalpha - function that says if c i in lowercase or uppercase
 *
 * Return: (1) means c is in lowercase or uppercase (0) if not
 *
 * @c: only one parameter
 */


int _isalpha(int c)
{

	if (('a' <= c) && (c <= 'z'))
	{
		return (1);
	}
	else if (('A' <= c) && (c <= 'Z'))
        {
		return (1);
	}
	return (0);
}
