#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num -This checks a string if there are any numbers
*
* @str: takes vale
*
* Return: Always 1 (Success)
*/
int check_num(char *str)
{
		unsigned int search;

		search = 0;
		while (search < strlen(str))
		{
			if (!isdigit(str[search]))
			{
				return (0);
			}
			search++;
		}
		return (1);
}

/**
* main - Print the name of the program
* @argc: Count arguments
* @argv: Arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
		int search;
		int str_to_int;
		int ans = 0;

		search = 1;
		while (search < argc)
		{
			if (check_num(argv[search]))
			{
				str_to_int = atoi(argv[search]);
				ans += str_to_int;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			search++;
		}
		printf("%d\n", ans);
		return (0);
}


