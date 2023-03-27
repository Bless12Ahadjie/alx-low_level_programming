#include "main.h"
/**
 * _strlen - returns the length of thr string
 *
 * @s: character used
 * Return: Always length of *s
 */
int _strlen(char *s)
{
		int c = 0;

	while (c >= 0)
	{
		if (s[c] == '\0')
		{
			break;
		}
		else
		{
			c++;
		}
	}
	return (c);
	return (0);
}
