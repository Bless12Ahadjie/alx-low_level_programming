#include <stdio.h>

void first_sentence(void) __attribute__ ((constructor));

/**
 * first_sentence - prints a sentence
 *
 *Return: ALways void
 */
void first_sentence(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

