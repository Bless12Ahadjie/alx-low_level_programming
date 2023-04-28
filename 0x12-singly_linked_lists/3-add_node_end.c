#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - This adds a new node at the end of a list_t list.
 *
 * @head: takes pointer value
 * @str: takes value
 *
 * Return: Always 'n' (success)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *trial = *head;
	unsigned int length = 0;

	while (str[lenght])
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
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (trial->next)
	{
		trial = trial->next;
	}
	trial->next = n;
	return (n);
}

