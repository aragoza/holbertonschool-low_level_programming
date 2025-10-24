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

	char c;

	for (c = 48;c <= 57;c++)
	{
		putchar(c);
	}
	for (c = 'a';c <= 'f';c++)
	{
		putchar(c);
	}

	putchar('\n');


	return (0);
}
