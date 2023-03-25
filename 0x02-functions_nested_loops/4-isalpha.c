#include "main.h"

/**
 * _isalpha - This is used to check alphabet
 *
 * @c: characcter to be checked
 *
 * Return: Always 0 (success)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c<= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
