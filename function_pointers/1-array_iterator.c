#include "function_pointers.h"

/**
 * array_iterator - execute the function action on array
 *
 * @array: is a an array of element
 * @size: is the size of the array
 * @action: is a function pointer that we will call
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || *action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
