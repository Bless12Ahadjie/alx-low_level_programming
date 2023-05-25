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

#include "main.h"
/**
 * append_text_to_file - This function appends text at the end of a file
 *
 * @filename: takes value
 * @text_content: takes value
 *
 * Return: Always 1 (success)
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int hold, c;
	int lengthy = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (lengthy = 0; text_content[lengthy];)
			lengthy++;
	}
	hold = open(filename, O_WRONLY | O_APPEND);
	c = write(hold, text_content, lengthy);

	if (hold == -1 || c == -1)
	{
		return (-1);
	}
	close(hold);
	return (1);
}

