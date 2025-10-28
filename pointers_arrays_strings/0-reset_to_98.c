#include "main.h"

/**
 * reset_to_98 - change the value of n to 98 via a pointer p
 *
 * @n: is a parameter of type int *
 */

void reset_to_98(int *n)
{
	int p;

	p = 98;
	*n = p;
}
