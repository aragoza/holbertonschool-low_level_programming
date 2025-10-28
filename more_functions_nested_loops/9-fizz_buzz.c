#include <stdio.h>

/**
 * main - print fizz if n|5 buzz if n|3 fizz buzz if n|5 and n|3
 *
 * @n: int that go from 0 to 100
 *
 * no return because of void output
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 ==0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			if (n % 3 == 0)
			{
				printf("Fizz");
			}
			else if (n % 5 == 0)
			{
				printf("Buzz");
			}

			else
			{
				printf("%d", n);
			}
		}
		if (n != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
