#include "3-calc.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int (*resultat)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	resultat = get_op_func(argv[2]);
	if (resultat == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", resultat(num1, num2));
	return (0);
}
