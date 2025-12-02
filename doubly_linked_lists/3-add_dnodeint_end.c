#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - will append a node at the end of the doubly linked list
 *
 * @head: list of type dlistint_t 
 * @n: int that will be the value int in the last node
 *
 * Return: (new_node) new doubly linked list 
 */ 

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node_at_end, *temp; 
	new_node_at_end = malloc(sizeof(dlistint_t));

	if (new_node_at_end == NULL)
	{
		return (NULL);
	}

	new_node_at_end->n = n;
	new_node_at_end->prev = NULL;
	new_node_at_end->next = NULL;


	if (*head == NULL)
	{
		*head = new_node_at_end;
		return (new_node_at_end);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node_at_end;
	new_node_at_end->prev = temp;

	return (new_node_at_end);
}
