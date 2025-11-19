#include "function_pointers.h"

/**
 * int_index - compare an int with every int of the array
 *
 * @array: is the array
 * @size: is the size of the array
 * @cmp: is the function that we will compare with
 *
 * Return: (-1) if no size, (i) the index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || *cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
