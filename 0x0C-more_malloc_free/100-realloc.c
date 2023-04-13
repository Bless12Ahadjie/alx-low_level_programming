#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - This reallocates a memory block using malloc and free
 *
 * @ptr: takes value
 * @old_size: takes value
 * @new_size: takes value
 *
 * Return: Always points (success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *points;
	char *old_ptr;
	unsigned int a;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	points = malloc(new_size);
	if (!points)
	{
		return (NULL);
	}
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
		{
			points[a] = old_ptr[a];
		}
	}
	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
		{
			points[a] = old_ptr[a];
		}
	}
	free(ptr);
	return (points);
}
