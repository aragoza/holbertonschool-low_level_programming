#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - will return the number of node
 *
 * @h: const list of type list_t 
 *
 * Return: (number_of_node) the number of node
 */

size_t list_len(const list_t *h)
{
	unsigned int number_of_node = 0;

	while(h != NULL)
	{
		number_of_node++;
		h = h->next;
	}

	return(number_of_node);
}
