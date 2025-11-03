#include "main.h"

/**
 * _strchr - sort string after getting c
 *
 * @s: string
 *
 * @c: constant where start sorting
 */



char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}

	return ('\0');
}
