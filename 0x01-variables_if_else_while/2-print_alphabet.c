#include <stdio.h>
#include <stdlib.h>
/**
 * main - This  program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
