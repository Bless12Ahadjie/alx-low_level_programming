#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int num, num1;

	for (num = 48; num <= 56; num++)
	{
		for (num1 = 49; num1 <= 57; num1++)
		{
			if (num1 > num)
			{
				putchar(num);
				putchar(num1);
				if (num != 56 || num1 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
