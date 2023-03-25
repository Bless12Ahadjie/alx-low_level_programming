#include "main.h"


/**
 * print_alphabet - This prints alphabet when called in the main 
 *
 * Return: Always void (success)
 */

void print_alphabet(void)
{
	char alpha;
	for(alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
