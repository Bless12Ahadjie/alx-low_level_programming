#include "main.h"
/**
 * string_toupper - This will change all lowercase to uppercase
 * @n: takes a pointer value
 *
 * Return: Always n (success)
 */
char *string_toupper(char *n)
{
	int a = 0;

	while (n[a] != '\0')
	{
		if (n[a] >= 'a' && n[a] <= 'z')
		{
			n[a] = n[a] - 32;
			a++;
		}
	}
	return (n);
}
