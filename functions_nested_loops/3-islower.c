#include "main.h"

/**
 * _islower - function that says if c i in lowercase
 *
 * Return: (1) means c is in lowercase (0) if not
 */


int _islower(int c) /*x* c - is an int parameter that check the char by translating in int */
{

	if (('a' <= c) && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}
