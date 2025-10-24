#include <stdio.h>

/**
 * main - main is a function that take in other function
 *
 * while - while is a function that loop if the condition ch is false
 *
 * Return: always (0)
 */

int main(void)
{

	char diz;
	char unit;

	for (diz = 48; diz <= 57; diz++)
	{
		for (unit = 48; unit <= 57; unit++)
		{
			putchar(diz);
			putchar(unit);
			putchar(',');
		}
	}

	putchar('\n');


	return (0);
}
