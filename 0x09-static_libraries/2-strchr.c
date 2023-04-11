#include "main.h"
/**
 * _strchr - This locates a character in a string
 *
 * @s: takes value
 * @c: takes value
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return (0);
}
