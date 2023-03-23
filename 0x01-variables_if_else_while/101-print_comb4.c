#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is the Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, num1, num2;

	for (num = 48; num < 58; num++)
	{
		for (num1 = 49; num1 < 58; num1++)
		{
			for (num2 = 50; num2 < 58; num2++)
			{
				if (num2 > num1 && num1 > num)
				{
					putchar(num);
					putchar(num1);
					putchar(num2);
					if (num != 55 || num1 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
