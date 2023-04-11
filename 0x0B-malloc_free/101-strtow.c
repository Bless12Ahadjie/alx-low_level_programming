#include <stdlib.h>
#include "main.h"
/**
 * count_word - This counts word and help save in memory
 *
 * @s: takes value
 *
 * Return: Always 'b' (success)
 */
int count_word(char *s)
{
	int signal = 0;
	int a, b;

	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			signal = 0;
		else if (signal == 0)
		{
			signal = 1;
			b++;
		}
	}
	return (b);
}
/**
 * **strtow - This splits string into words
 *
 * @str: takes value
 *
 * Return: Always
 */
char **strtow(char *str)
{
	char **a, *tmp;
	int i, j = 0, length = 0, word, k = 0, start, stop;

	while (*(str + length))
		length++;
	word = count_word(str);
	if (word == 0)
		return (NULL);

	a = (char **) malloc(sizeof(char *) * (word + 1));
	if (a == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				stop = i;
				tmp = (char *) malloc(sizeof(char) * (k + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < stop)
					*tmp++ = str[start++];
				*tmp = '\0';
				a[j] = tmp - k;
				j++;
				k = 0;
			}
		}
		else if (k++ == 0)
			start = i;
	}

	a[j] = NULL;

	return (a);
}

