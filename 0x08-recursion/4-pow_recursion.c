#include "main.h"
/**
 * _pow_recursion - This returns the value of x raised to the power of y
 *
 * @x: takes value
 * @y: takes value
 *
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
