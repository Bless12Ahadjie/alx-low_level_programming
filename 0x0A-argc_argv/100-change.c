#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - This prints the minimum number
 * of coins to make change for an amount of money
 *
 * @argc: takes value
 * @argv: takes value
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num, a, ans;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	ans = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (a = 0; a < 5 && num >= 0; a++)
	{
		while (num >= coin[a])
		{
			ans++;
			num -= coin[a];
		}
	}
	printf("%d\n", ans);
	return (0);
}

