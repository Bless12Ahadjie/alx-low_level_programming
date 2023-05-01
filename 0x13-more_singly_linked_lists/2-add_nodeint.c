
#include "lists.h"
/**
 * add_nodeint - This adds a new node at the beginning of a listint_t list.
 *
 * @head: take value
 * @n: takes value
 *
 * Return: Always 'newNode' (success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
