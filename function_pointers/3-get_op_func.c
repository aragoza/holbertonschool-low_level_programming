#include "3-calc.h"

/**
 * get_op_func - function that will search for the good function to use
 *
 * @s: char pointer to the good operator that will be checked
 *
 * Return: ops[i].f a pointer to the function in ops struct
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if ((ops[i].op[0]) == s[0] && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}