#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: takes value
 * @letters: takes value
 * Return:ALway 'c' (success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer_pointer;
	ssize_t a, b, c;

	a = open(filename, O_RDONLY);
	if (a == -1)
	{
		return (0);
	}
	buffer_pointer = malloc(sizeof(char) * letters);
	b = read(a, buffer_pointer, letters);
	c = write(STDOUT_FILENO, buffer_pointer, b);

	free(buffer_pointer);
	close(a);
	return (c);
}
