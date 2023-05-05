#include "main.h"
/**
 * clear_bit - This sets the value of a bit to 0 at a given index.
 *
 * @n: takes value
 * @index: takes value
 *
 * Return: Always 1 (success)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int a = 63;

	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}

