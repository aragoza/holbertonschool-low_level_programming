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
	char c[] = "123456789abcdef";

	for (int i = 0;i < 16;i++)
		putchar(c[i]);

	putchar('\n');


	return (0);
}
