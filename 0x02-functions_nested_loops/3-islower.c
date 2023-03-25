#include "main.h"

/**
 * _islower - This is used to check if an
 * alphabet is lower
 * @c: character to be checked true
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
