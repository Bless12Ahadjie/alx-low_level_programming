#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: Value being checked
 * Return: Absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		int value;

		value = n * -1;
		return (value);
	}
	return (n);
}

