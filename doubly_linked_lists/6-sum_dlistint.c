#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - will print every value stock in every chunck of the list h
 *
 * @head: list of type dlistint_t
 *
 * Return: (value) the sum of the value of every node
 */

int sum_dlistint(dlistint_t *head)
{
	int value = 0;

	while (head != NULL)
	{
		value += head->n;
		head = head->next;
	}

	return (value);
}
