#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: takes a value
 * @b: takes the desired value
 * @n: takes byte value
 * Return: Always s (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
