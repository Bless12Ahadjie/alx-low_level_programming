#include <stdlib.h>
#include "main.h"
/**
 * *array_range - This creates an array of integers
 *
 * @min: takes value
 * @max: takes value
 *
 * Return: Always 'points' (success)
 */
int *array_range(int min, int max)
{
	int *points;
	int a;
	int s;

	if (min > max)
	{
		return (NULL);
	}
	s = max - min + 1;

	points = malloc(sizeof(int) * s);

	if (points == NULL)
	{
		return (NULL);
	}
	for (a = 0; min <= max; a++)
	{
		points[a] = min++;
	}
	return (points);
}
