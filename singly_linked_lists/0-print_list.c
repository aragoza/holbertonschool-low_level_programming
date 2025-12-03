#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - will print every value stock in every chunck of the list h
 *
 * @h: const list of type list_t
 *
 * Return: (number_of_node) the number of node
 */

size_t print_list(const list_t *h)
{
	unsigned int number_of_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		number_of_node++;
		h = h->next;
	}

	return (number_of_node);
}
