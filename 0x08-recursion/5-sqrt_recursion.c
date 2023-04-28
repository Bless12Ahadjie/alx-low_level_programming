#include "main.h"

int actual_square(int a, int b);

/**
 * _sqrt_recursion - This  returns the natural square root of a number.
 *
 * @n: takes value
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_square(n, 0));
}

/**
 * actual_square -This finds sruare root
 *
 * @a: takes value
 * @b: takes value
 *
 * Return: Always 'actual_square. (success)
 */
int actual_square(int a, int b)
{
	if (b * b > a)
	{
		return (-1);
	}
	else if (b * b == a)
	{
		return (b);
	}
	return (actual_square(a, b + 1));
}

