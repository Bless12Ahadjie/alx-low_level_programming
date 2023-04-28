#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - This  adds a new node at the beginning of a list_t list.
 *
 * @head: takes value
 * @str: takes value
 *
 * Return: Always 'head'(success)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int length = 0;

	while (str[length])
	{
		length++;
	}

	n = malloc(sizeof(list_t));
	if (!n)
	{
		return (NULL);
	}

	n->str = strdup(str);
	n->len = length;
	n->next = (*head);
	(*head) = n;

	return (*head);
}

