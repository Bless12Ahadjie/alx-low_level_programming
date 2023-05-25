#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: takes a value
 * @text_content: takes a value
 *
 * Return: Alway 1 (success)
 */
int create_file(const char *filename, char *text_content)
{
	int a, c, lengthy = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (lengthy = 0; text_content[lengthy];)
		{
			lengthy++;
		}
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	c = write(a, text_content, lengthy);

	if (a == -1 || c == -1)
	{
		return (-1);
	}

	close(a);
	return (1);
}
