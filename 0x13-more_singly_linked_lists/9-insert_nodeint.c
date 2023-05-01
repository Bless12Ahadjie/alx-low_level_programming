#include "lists.h"
/**
 * insert_nodeint_at_index - This inserts a new node at a given position.
 * @head: takes value
 * @idx: takes value
 * @n: takes value
 *
 * Return: Always NULL (successs)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *holds = *head;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (a = 0; holds && a < idx; a++)
	{
		if (a == idx - 1)
		{
			newNode->next = holds->next;
			holds->next = newNode;
			return (newNode);
		}
		else
		{
			holds = holds->next;
		}
	}
	return (NULL);
}

