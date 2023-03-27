#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 *
 * @s: a pointer to a string
 *
 * Return: Always void
 */
void print_rev(char *s)
{
	int temp = 0;
	int c;

	while (temp >= 0)
	{
		if (s[temp] == '\0')
		{
			break;
		}
		else
		{
			temp++;
		}
	}

	for (c = temp - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
