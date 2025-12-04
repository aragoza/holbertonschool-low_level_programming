#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - will free every value stock in every chunck of the list h
 *
 * @head: list of type list_t
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *free_head;

	while (head != NULL)
	{
		free_head = head->next;
		free(head->str);
		free(head);
		head = free_head;
	}

}
