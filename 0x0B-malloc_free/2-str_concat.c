#include <stdlib.h>
#include "main.h"
/**
 * str_concat - This concatenates two strings
 *
 * @s1: takes value
 * @s2: takes value
 *
 * Return: Always str (success)
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int a = 0;
	int b = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	str = malloc(sizeof(char) * (a + b + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	a = b = 0;
	while (s1[a] != '\0')
	{
		str[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		str[a] = s2[b];
		a++;
		b++;
	}
	str[a] = '\0';
	return (str);
}

