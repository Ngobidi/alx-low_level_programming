#include <unistd.h>

/**
 *  _putchar - state the char c to stdout
 *  @c: The char to print
 *
 *  Return: On success 1.
 *  else, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
