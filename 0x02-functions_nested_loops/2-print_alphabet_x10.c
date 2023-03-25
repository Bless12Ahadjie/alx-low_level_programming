#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int j = 9;

	while (j <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		
		}
		_putchar('\n');
		j++;
	}
}
