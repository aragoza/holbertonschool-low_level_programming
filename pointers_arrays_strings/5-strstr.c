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

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;
	int next;
	int count = 0;

/** check the first char of needle and if it correspond we continue the check */
	for (j = 0; *(needle + j) != '\0'; j++)
	{
		next = 0;

/** check one char of needle for every char in haystack and when we meet one we increment */
		while (*(haystack + i) != '\0')
		{
			if (*(needle + j) == *(haystack + i))
			{
				next = 1;
				count++;
				break;
			}
			i++;
		}
		if (*(haystack + i) == '\0')
		{
			return (NULL);
		}

		else if (next == 0 && count >= 1)
		{
			j = 0;
			count = 0;
		}

	}
	return ((haystack + i - count + 1));
}
