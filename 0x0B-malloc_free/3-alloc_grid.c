#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - This returns a pointer to a 2
 * dimensional array of integers
 *
 * @width: takes value
 * @height: takes value
 *
 * Return: Always (success)
 */
int **alloc_grid(int width, int height)
{
	int **i;
	int a;
	int b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	i = malloc(sizeof(int *) * height);
	if (i == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		i[a] = malloc(sizeof(int) * width);
		if (i[a] == NULL)
		{
			for (; a >= 0; a--)
			{
				free(i[a]);
			}
			free(i);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			i[a][b] = 0;
	}

	return (i);
}

