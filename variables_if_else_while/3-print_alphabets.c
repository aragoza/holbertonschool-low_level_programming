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

	char ch = 'a';
	char cha = 'A';

	while (ch != '{')
	{
		putchar(ch);
		ch++;
	}

	while (cha <= 'Z')
	{
		putchar(cha);
		cha++;
	}

	putchar('\n');

	return (0);
}
