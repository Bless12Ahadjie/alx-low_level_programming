#include "main.h"

/**
 * factorial - This returns the factorial of a given number.
 *
 * @n: takes value
 *
 * Return: Always 'n' (success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n -= 1));
}
