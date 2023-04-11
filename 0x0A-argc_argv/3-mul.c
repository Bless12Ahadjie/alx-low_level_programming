#include <stdio.h>
#include "main.h"
/**
 * _atoi - This converts strings into integers
 *
 * @s: takes value
 *
 * Return: Always n
 */
int _atoi(char *s)
{

	int a = 0, d = 0;
	int n = 0, length = 0;
	int f = 0, num = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (a < length && f == 0)
	{
		if (s[a] == '-')
		{
			++d;
		}
		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';

			if (d % 2)
			{
				num = -num;
			}
			n = n * 10 + num;

			f = 1;

			if (s[a + 1] < '0' || s[a + 1] > '9')
			{
				break;
			}
			f = 0;
		}
		a++;
	}
	if (f == 0)
	{
		return (0);
	}
	return (n);
}
/**
 * main - This multiplies two numbers
 *
 * @argc: takes value
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int ans, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	ans = num1 * num2;

	printf("%d\n", ans);

	return (0);
}
