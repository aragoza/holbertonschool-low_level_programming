#include <stdio.h>

/**
 * main - Entry point
 * printf - print what is between ()
 * sizeof - count the nmbr of bytes in the type of the element
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long: %zu byte(s)\n", sizeof(long long));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
