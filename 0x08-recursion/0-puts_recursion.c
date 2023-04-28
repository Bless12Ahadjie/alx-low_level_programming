#include "main.h"
/**
 * _puts_recursion - This prints a string, followed by a new line
 *
 * @s: takes value
 *
 * Return: Always void (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s += 1);
	}
	else
	{
		_putchar('\n');
	}
}
