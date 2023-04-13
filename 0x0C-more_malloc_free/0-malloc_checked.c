#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - This allocates memory using malloc
 * @b: takes value
 *
 * Return: Always 'points' (success)
 */
void *malloc_checked(unsigned int b)
{
	void *points;

	points = malloc(b);
	if (points == NULL)
	{
		exit(98);
	}
	return (points);
}
