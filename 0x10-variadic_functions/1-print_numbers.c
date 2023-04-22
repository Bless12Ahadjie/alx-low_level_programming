#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - This will print numbers,
 * followed by a new line.
 *
 * @separator: takes value
 * @n: Takes value
 * @...: parameter
 *
 *Return: Always void (success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int a;

	va_start(num, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(num, int));

		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(num);
}

