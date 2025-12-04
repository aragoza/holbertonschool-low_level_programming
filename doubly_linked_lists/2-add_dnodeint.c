#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - will count the number of chunck of the list h
 *
 * @head: list of type dlistint_t
 * @n: const int
 *
 * Return: (new_node) new doubly linked list
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
	}
	else
	{
		(*head)->prev = new_node;
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
