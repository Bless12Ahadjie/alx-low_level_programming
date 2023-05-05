#include "main.h"
/**
 * flip_bits - this  returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: takes value
 * @m: takes value
 *
 * Return: Always 'run' (success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num = 63;
	unsigned long int i = n ^ m;
	unsigned long int now;
	int run = 0;

	for (; num >= 0; num--)
	{
		now = i >> num;
		if (now & 1)
		{
			run++;
		}
	}

	return (run);
}

