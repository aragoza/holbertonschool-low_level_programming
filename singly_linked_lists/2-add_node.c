#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * _strlen - say the size of a string
 *
 * @s: is the string parameter
 *
 * Return: (i) the size of s
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}
	return (i);
}

/**
 * add_node - will append a node in the linked list
 *
 * @head: list of type list_t
 * @str: string in the new node
 *
 * Return: (new_node) a pointer to a linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
