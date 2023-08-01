#include <unistd.h>
#include "lists.h"

/**
 * _putchar - print the char c to stdout
 *  @c: The char
 *
 *  Return: always (1)
 *   else if error occurred, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
