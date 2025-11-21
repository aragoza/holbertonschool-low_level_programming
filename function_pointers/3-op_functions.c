#include "3-calc.h"


/**
 * op_add - operate addition between a and b
 *
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - operate susbtract between a and b
 *
 * @a: first number
 * @b: second number
 * Return: subs of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - operate multiplaction between a and b
 *
 * @a: first number
 * @b: second number
 * Return: mul of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - operate division between a and b
 *
 * @a: first number
 * @b: second number (different of 0)
 * Return: div of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - operate modulo between a and b
 *
 * @a: first number
 * @b: second number (different of 0)
 * Return: mod of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
