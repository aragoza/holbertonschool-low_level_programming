#include <stdio.h>

/**
 * main - Entry point
 *
 * sizeof - count the nmbr of bytes in the type of the element
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}
