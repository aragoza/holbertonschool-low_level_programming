#include <stdio.h>

/**
 * main - Entry point
 * printf - print what is between ()
 * sizeof - count the nmbr of bytes in the type of the element
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of double: %lu bytes\n", sizeof(double));
	printf("Size of float: %lu bytes\n", sizeof(float));
	printf("Size of char: %lu bytes\n", sizeof(char));
	return (0);
}
