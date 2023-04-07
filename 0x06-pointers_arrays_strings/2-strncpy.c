#include "main.h"
/**
 *  _strncpy - This copies a string
 * @dest: takes value
 * @src: takes value
 * @n: takes value
 *
 * Return: Always dest (success)
 */
{
	int a = 0;

	while (a < n && src[a]!= '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
