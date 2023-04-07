#include "main.h"
/**
 * reverse_array - This reverses array of integers
 *
 * @a: takes array values
 * @n: number of elements of array
 *
 * Return: Always void (success)
 */
void reverse_array(int *a, int n)
{
	int element;
	int b;

	for (element = 0; element < n--; element++)
	{
		b = a[element];
		a[element] = a[n];
		a[n] = b;
	}
}
