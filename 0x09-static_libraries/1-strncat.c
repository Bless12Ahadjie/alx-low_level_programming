#include "main.h"
/**
 * _strncat - it will use at most n bytes from src
 * to concatenate two strings
 *
 * @dest: takes value
 * @src: takes value
 * @n: takes value
 *
 * Return: Always dest (success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
