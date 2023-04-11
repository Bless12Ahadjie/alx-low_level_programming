#include <stdlib.h>
#include "main.h"
/**
 * create_array - This creates an array of chars, and
 * initializes it with a specific char
 *
 * @size: takes array value
 * @c: takes value
 *
 *
 * Return: Always string
 *
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int a;

	string = malloc(sizeof(char) * size);

	if (size == 0 || string == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		string[a] = c;
	}
	return (string);
}

