#include "lists.h"
/**
 * delete_nodeint_at_index -This deletes the node at index
 * index of a listint_t linked list.
 *
 * @head: takes value
 * @index: takes value
 *
 * Return: Always 1 (Success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hold = *head;
	listint_t *now = NULL;
	unsigned int a = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	else if (index == 0)
	{
		*head = (*head)->next;
		free(hold);
		return (1);
	}

	while (a < index - a)
	{
		if (!hold || !(hold->next))
		{
			return (-1);
		}
		hold = hold->next;
		a++;
	}
	now = hold->next;
	hold->next = now->next;
	free(now);

	return (1);
}

