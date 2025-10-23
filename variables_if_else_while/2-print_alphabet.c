#include <stdio.h>

/**
 * main - main is a function that take in other function
 *
 * while - while is a function that loop if the condition ch is different from A (it will print the alphabet in lowercase
 */

int main(void)
{
	char ch = 'a';

	while(ch!='{')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return(0);
}
