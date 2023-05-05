#include "main.h"
/**
 * print_binary -  This prints the binary representation of a number.
 *
 * @n: takes value
 *
 *Return: Always void (success)
 */
void print_binary(unsigned long int n)
{
	int run_through = 0;
	int a;
	unsigned long int now;

	for (a = 63; a >= 0; a--)
	{
		now = n >> a;

		if (now & 1)
		{
			_putchar('1');
			run_through++;
		}
		else if (run_through)
		{
			_putchar('0');
		}
	}
	if (!run_through)
	{
		_putchar('0');
	}
}
