#include "main.h"
/**
 * _strcat- This will concatenate two strings
 *
 * @dest: takes value
 * @src: Also takes a value
 *
 * Return: Always void (success)
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
