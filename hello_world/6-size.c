#include <stdio.h>

/**
 * main - Entry point
 * printf - print what is between ()
 * sizeof - count the nmbr of bytes in the type of the element
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of char: %lu bytes\n", sizeof(char));
	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of long int: %lu bytes\n", sizeof(long int));
	printf("Size of long long: %lu bytes\n", sizeof(long long));
        printf("Size of float: %lu bytes\n", sizeof(float));
	return (0);
}
