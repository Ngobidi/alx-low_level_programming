#include <unistd.h>

/**
 * _putchar - print the char c to stdout
 * @c: char
 *
 * Return: always 1, else -1 if error occured.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
