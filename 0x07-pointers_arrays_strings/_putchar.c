#include <unistd.h>

/**
 * _putchar - print the character c to stdout
 * @c: The char to write
 *
 * Return: return 1. (when check is successful)
 * On error, return -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
