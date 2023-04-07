#include "main.h"
/**
 *  _strncpy - This copies a string
 * @dest: takes value
 * @src: takes value
 * @n: takes value
 *
 * Return: Always dest (success)
 */
char *_strncpy(char *dest, char *src, int n)
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
