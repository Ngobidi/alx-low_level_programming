#include <unistd.h>

/**
 * _putchar - print the character c to stdout
 * @c: The cha to write
 *
 * Return: always return 1.
 * On error, -1 is returned,
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
