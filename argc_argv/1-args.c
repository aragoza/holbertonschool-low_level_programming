#include <stdio.h>

/**
 * main - function that print the number of arg
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

	if (argc <= 1)
	{
		for (i = 0; argv[i] != argv[argc - 1]; i++)
		{
		}
		printf("%d", i);
	}

	return (0);
}
