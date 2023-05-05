#include "main.h"
/**
 * get_bit - this returns the value of a bit at a given index
 *
 * @n: takes value
 * @index: takes value
 *
 * Return: Always 'value_ofBits' (success)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_ofBits;

	if (index > 63)
	{
		return (-1);
	}

	value_ofBits = (n >> index) & 1;
	return (value_ofBits);
}





