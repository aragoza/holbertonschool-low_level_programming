#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - will free every value stock in every chunck of the list h
 *
 * @head: list of type list_t
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_head;

	while (head != NULL)
	{
		free_head = head->next;
		head = head->next;
		free(free_head);
	}

}
