#include <stdio.h>
/**
 * array_iterator - This executes a function given
 * as a parameter on each element of an array.
 *
 * @array: array
 * @size: takes value
 * @action: takes value
 *
 * Return: Always void (success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

