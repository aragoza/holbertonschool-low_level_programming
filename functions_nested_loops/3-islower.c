#include "main.h"

/**
 * _islower - function that says if c i in lowercase
 *
 * Return: (1) means c is in lowercase (0) if not
 */


int _islower(int c)
{

	if ((97 <= c) && (c <= 122))
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
