#include "lists.h"
#include <stdio.h>

/**
 * delete_dnodeint_at_index - return the value of the node at a given index
 *
 * @head: list of type dlistint_t
 * @index: index of the node we want
 *
 * Return: (1) if work (-1) if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int number_of_node;
	dlistint_t *hold_to_delete, *temp;

	number_of_node = 0;

	if (*head == NULL)
	{
		return (-1);
	}


	temp = *head;

	if (index == 0)
	{
		hold_to_delete = temp;
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(hold_to_delete);
		return (1);
	}

	while (temp != NULL && number_of_node < index - 1)
	{
		number_of_node++;
		temp = temp->next;
	}

	hold_to_delete = temp->next;

	temp->next = hold_to_delete->next;
	if (hold_to_delete->next != NULL)
		hold_to_delete->next->prev = temp;

	free(hold_to_delete);

	return (1);
}
