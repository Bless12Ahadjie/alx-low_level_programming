#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - This will print strings,
 * followed by a new line.
 *
 * @separator: Takes value
 * @n: takes value
 * @...: parameter
 *
 * Return: Always void (success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *string1;
	unsigned int a;

	va_start(string, n);

	for (a = 0; a < n; a++)
	{
		string1 = va_arg(string, char *);

		if (string1 == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string1);
		}

		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(string);
}

