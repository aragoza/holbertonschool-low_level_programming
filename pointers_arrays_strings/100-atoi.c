#include "main.h"

/**
 * _atoi - change type of a char into an int (output the first number in the string)
 *
 * @s: string
 *
 * Return: (0) if no digit in the string (n) the number in the string
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1; /** siggn of the number */
	unsigned int n = 0; /** ending result */
	int started = 0; /** check for the beeginning of a number */

	while (*(s + i) != '\0')
	{
		if (!started && (*(s + i) == '-' || *(s + i) == '+'))
		{
			if (*(s + i) == '-')
			sign = -sign;
		}
		else if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			started = 1; /** there is at least 1 digit */
			n = n * 10 + (*(s + i) - '0'); /** multiple then add the last digit */
		}
		else if (started != 0) /** is check only if the other 'if' are not tested */
			break;

	i++;
	}

	return (n * sign);
}
