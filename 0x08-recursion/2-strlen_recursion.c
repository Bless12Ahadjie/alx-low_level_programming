#include "main.h"
/**
 * _strlen_recursion - This returns the length of a string.
 *
 * @s: Takes value
 *
 * Return: Always 'length' (success)
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s += 1);
	}
	return (length);
}
