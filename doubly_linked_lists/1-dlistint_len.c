#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - will print every value stock in every chunck of the list h
 *
 * @h: const list of type list_t
 *
 * Return: (number_of_node) the number of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int number_of_node = 0;

	while (h != NULL)
	{
		number_of_node++;
		h = h->next;
	}

	return (number_of_node);
}
