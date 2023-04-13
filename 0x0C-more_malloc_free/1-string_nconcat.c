#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - This concatenates two strings
 *
 * @s1: takes value
 * @s2: takes value
 * @n: takes value
 *
 * Return: Always 'c' (success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int a = 0, b = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
	{
		l1++;
	}
	while (s2 && s2[l2])
	{
		l2++;
	}

	if (n < l2)
	{
		c = malloc(sizeof(char) * (l1 + n + 1));
	}
	else
	{
		c = malloc(sizeof(char) * (l1 + l2 + 1));
	}
	if (!c)
	{
		return (NULL);
	}
	while (a < l1)
	{
		c[a] = s1[a];
		a++;
	}
	while (n < l2 && a < (l1 + n))
	{
		c[a++] = s2[b++];
	}
	while (n >= l2 && a < (l1 + l2))
	{
		c[a++] = s2[b++];
	}
	c[a] = '\0';
	return (c);
}
