#include "main.h"
/**
 * binary_to_uint - this converts a binary number to an unsigned int.
 *
 * @b: takes value
 *
 * Return: Always 'value' (success)
 */
unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	unsigned int value;

	value = 0;

	if (!b)
	{
		return (0);
	}
	for (; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
		{
			return (0);
		}
		value = 2 * value + (b[a] - '0');
	}

	return (value);
}
