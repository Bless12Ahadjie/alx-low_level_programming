#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - This returns the sum of all its paramters
 *
 * @n: Takes values
 * @...: parameters
 *
 * Return: Always 'res' (success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, res = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
	{
		res += va_arg(ap, int);

		va_end(ap);
	}

	return (res);
}

