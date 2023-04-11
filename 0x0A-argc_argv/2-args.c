#include <stdio.h>
#include "main.h"
/**
 * main - This prints all arguments it receives
 * @argc: takes array
 * @argv: takes array vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
