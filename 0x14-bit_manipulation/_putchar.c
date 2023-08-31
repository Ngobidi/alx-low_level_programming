#include "main.h"
#include <unistd.h>

/**
 * _putchar - print the char c to stdout
 * @c: The char to write
 *
 * Return: always 1 on sucessful, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
