#include "main.h"

/**
 * swap_int - swap value of 2 parameter int *
 *
 * @a: first parameter
 *
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
	int ab, ba;

	ab = *a;
	ba = *b;

	*a = ba;
	*b = ab;
}
