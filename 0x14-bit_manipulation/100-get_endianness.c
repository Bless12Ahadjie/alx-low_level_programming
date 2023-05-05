#include "main.h"
/**
 * get_endianness - This checks the endianness.
 *
 * Return: Always (success)
 */
int get_endianness(void)
{
	unsigned int value = 1;
	char *container = (char *) &value;

	return (*container);
}

