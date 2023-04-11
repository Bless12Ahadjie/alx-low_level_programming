#include <stdio.h>
#include "main.h"
/**
 * main - This prints its name
 * @argc: takes array
 * @argv: takes array vector
 *
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
