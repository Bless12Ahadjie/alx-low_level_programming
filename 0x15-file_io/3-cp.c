#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *mk_buffer(char *c);
void cls_file(int a);

/**
 * mk_buffer - gives bytes to a buffer.
 *
 * @c: takes value
 *
 * Return: ALways "burfer" (success)
 */
char *mk_buffer(char *c)
{
	char *burfer;

	burfer = malloc(sizeof(char) * 1024);

	if (burfer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", c);
		exit(99);
	}
	return (burfer);
}

/**
 * cls_file - closes file.
 *
 * @a: The file descriptor to be closed.
 */
void cls_file(int a)
{
	int hold;

	hold = close(a);

	if (hold == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close a %d\n", a);
		exit(100);
	}
}

/**
 * main - This copies the content of a file to another file
 *
 * @argcount: takes value
 * @argvector: takes value
 *
 * Return: Always 0 (success)
 */
int main(int argcount, char *argvector[])
{
	int old, new, a, b;
	char *buf;

	if (argcount != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = mk_buffer(argvector[2]);
	old = open(argvector[1], O_RDONLY);
	a = read(old, buf, 1024);
	new = open(argvector[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (old == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argvector[1]);
			free(buf);
			exit(98);
		}

		b = write(new, buf, a);
		if (new == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argvector[2]);
			free(buf);
			exit(99);
		}

		a = read(old, buf, 1024);
		new = open(argvector[2], O_WRONLY | O_APPEND);

	} while (a > 0);

	free(buf);
	cls_file(old);
	cls_file(new)

	return (0);
}

