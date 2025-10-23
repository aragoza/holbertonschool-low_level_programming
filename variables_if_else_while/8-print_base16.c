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
	int i = 0x0;

	while (i <= 0xf)
	{
		printf("%x", i);
		i++;
	}

	putchar('\n');


	return (0);
}
