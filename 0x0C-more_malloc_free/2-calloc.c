#include <stdlib.h>
#include "main.h"
/**
 * *_memset - This gives the memory constant byte
 *
 * @s: takes value
 * @b: takes value
 * @n: takes value
 *
 * Return: Always *s (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
/**
 * _calloc - This allocates memory for an array, using malloc
 * @nmemb: takes value
 * @size: takes value
 *
 * Return: Always 'points' (success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *points;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	points = malloc(size * nmemb);
	if (points == NULL)
	{
		return (NULL);
	}
	_memset(points, 0, nmemb * size);
	return (points);
}
