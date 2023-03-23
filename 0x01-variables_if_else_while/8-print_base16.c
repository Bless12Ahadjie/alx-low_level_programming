#include <stdio.h>
#include <stdlib.h>
/**
 * main - Base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char c;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
