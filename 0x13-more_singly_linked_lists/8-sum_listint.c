#include "lists.h"
/**
 * sum_listint - This returns the sum of all the
 * data (n) of a listint_t linked list.
 *
 * @head: takes value
 *
 * Return: Always 'result' (success)
 */
int sum_listint(listint_t *head)
{
	int result;
	listint_t *holds = head;

	result = 0;
	while (holds)
	{
		result += holds->n;
		holds = holds->next;
	}
	return (result);
}
