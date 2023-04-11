#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - This returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: takes value
 *
 * Return: Always 'a' (success)
 */
char *_strdup(char *str)
{
	char *a;
	int b = 0;
	int c;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[b] != '\0')
	{
		b++;
	}

	a = malloc(sizeof(char) * (b + 1));

	if (a == NULL)
	{
		return (NULL);
	}

	for (c = 0; str[c]; c++)
	{
		a[c] = str[c];
	}

	return (a);
}

