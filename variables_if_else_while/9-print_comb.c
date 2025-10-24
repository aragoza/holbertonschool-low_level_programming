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

	for (diz = 48; diz <= 57; diz++)
	{
		putchar(diz);
		if (diz <= 56)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');


	return (0);
}
