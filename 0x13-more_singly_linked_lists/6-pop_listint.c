#include "lists.h"
/**
 * pop_listint - This deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 *
 * @head: takes value
 *
 * Return:Always 'a' (success)
 */
int pop_listint(listint_t **head)
{
	listint_t *hold;
	int a;

	if (!head || !*head)
	{
		return (0);
	}

	a = (*head)->n;
	hold = (*head)->next;
	free(*head);
	*head = hold;

	return (a);
}
