#include "main.h"
/**
 * rev_string - reverse the string
 *
 * @s: is the string parameter
 *
 * no return because of void
 */

void rev_string(char *s)
{
	char *start = s;
	char *end = s;
	char a;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (end > start)
	{
		a = *start;
		*start = *end;
		*end = a;

		start++;
		end--;
	}
}
