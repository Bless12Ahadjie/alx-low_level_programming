#include "main.h"
/**
 * swap_int - this function swaps pointers passed as parameters
 *
 * @a: a character to be swapped
 * @b:a character to be swapped
 *
 * Return: Always void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
