#include "main.h"

/**
 * _strlen_recursion - print the length of a  string with recursion method
 *
 * @s: string pointer
 *
 * Return: (n) the length of the string
 */



int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}
