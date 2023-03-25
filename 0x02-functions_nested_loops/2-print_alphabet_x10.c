#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int j;

	for (j = 0; j <= 10; j++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
