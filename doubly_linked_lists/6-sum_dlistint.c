#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - will print every value stock in every chunck of the list h
 *
 * @h: const list of type list_t 
 *
 * Return: (number_of_node) the number of node
 */

int sum_dlistint(dlistint_t *head)
{
    int value = 0;

	while(head != NULL)
	{
        value += head->n;
		head = head->next;
	}

	return (value);
}
