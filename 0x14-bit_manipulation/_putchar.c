#include <unistd.h>
#include "main.h"
/**
* _putchar - prints whatever is given to out
*
* @c: Takes value
*
* Return: Always whats printed(success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
