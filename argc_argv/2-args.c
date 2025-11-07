#include <stdio.h>

/**
 * main - function that print the arg
 *
 * @argc: int that count the number of arg
 *
 * @argv: pointer char that keep arg in memory
 *
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; argv[i] != argv[argc]; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
