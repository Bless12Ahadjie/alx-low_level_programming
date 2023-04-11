#include <stdio.h>
#include "main.h"
/**
 * main - This prints the number of arguments passed into it
 *
 * @argc: takes array
 * @argv: takes array vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
