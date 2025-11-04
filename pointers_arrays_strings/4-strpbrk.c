#include "main.h"

/**
 * _strpbrk - set the string *s to begin when a char in *accept is detected
 *
 * @s: an every string
 *
 * @accept: the string that will be check for each character in s
 *
 * Return: s that is set with first char being in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != *(accept + i))
	{
		while (*s != *(accept + i))
		{
			i++;
		}
		s++;
	}
	s--;

	return (s);
}
