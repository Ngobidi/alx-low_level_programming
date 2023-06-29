#include <unistd.h>

/**
 * _putchar - print the char c to stdout
 *  @c: The char to write
 *
 *  Return: always return 1. (when validated)
 *   else, return -1 (if error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
