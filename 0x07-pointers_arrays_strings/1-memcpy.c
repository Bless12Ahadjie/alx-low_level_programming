#include "main.h"
/**
 * _memcpy - This function copies memory area
 *
 * @dest: takes value
 * @src: takes value
 * @n: takes value in byte
 *
 * Return: Always dest (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b = n;

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
