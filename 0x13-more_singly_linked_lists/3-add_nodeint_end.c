#include "lists.h"
/**
 * add_nodeint_end - This adds a new node at the
 * end of a listint_t list.
 *
 * @head: takes value
 * @n: takes value
 *
 * Return: Always 'newNode' (success)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *t = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (t->next)
	{
		t = t->next;
	}
	t->next = newNode;
	return (newNode);
}
