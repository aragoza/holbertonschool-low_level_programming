#include "lists.h"
#include <stdio.h>

/**
 *  insert_dnodeint_at_index - add a node at a given index
 *
 * @h: list of type dlistint_t
 * @idx: index of the node we want
 * @n: the value of n
 *
 * Return: (new_node) the node at the index
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int number_of_node;
	dlistint_t *new_node, *temp;

	number_of_node = 0;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	/** new_node = {n ,NULL, NULL}; */

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}

	temp = *h;

	while (number_of_node < idx - 1)
	{
		if (temp == NULL)
			return (NULL);

		number_of_node++;
		temp = temp->next;
	}

	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	temp = temp->next->next;
	temp->prev = new_node;

	return (new_node);
}
