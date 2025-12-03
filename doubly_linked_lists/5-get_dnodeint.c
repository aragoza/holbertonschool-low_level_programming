#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - return the value of the node at a given index
 *
 * @head: list of type dlistint_t
 * @index: index of the node we want
 *
 * Return: (head) the node at the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int number_of_node = 0;

	while (number_of_node < index)
	{
		if (head == NULL)
			return (NULL);

		number_of_node++;
		head = head->next;
	}

	return (head);
}
