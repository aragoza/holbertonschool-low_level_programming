#include "main.h"

/**
 * _strspn - check how much continuous char are in *s and are in *accept
 *
 * @s: an every string
 *
 * @accept: the string that will be check for each character in s
 *
 * Return: count that have count how consecutive char are in s and accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, next;
	unsigned int count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		next = 0;

		for (j = 0; *(accept + j) != '\0'; j++)
		{

			if (*(s + i) == *(accept + j))
			{
				next = 1;
				count = count + 1;
				break;
			}

		}

		if (count >= 1 && next == 0)
		{
			return (count);
		}
	}
	return (count);
}
