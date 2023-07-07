#include <unistd.h>

/**
 * _putchar - print the char c to stdout
 *  @c: The char to write
 *
 *  Return: return 1. (check is successful)
 *   else, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
