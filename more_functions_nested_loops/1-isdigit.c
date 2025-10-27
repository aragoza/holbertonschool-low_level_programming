#include "main.h"

/**
 * _isdigit - says if the last digit of c is a digit
 *
 * @c: number in int type
 *
 * Return: 1 if it is a digit or 0
 */

int _isdigit(int c)
{

	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}
