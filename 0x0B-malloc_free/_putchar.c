#include "main.h"
#include <unistd.h>
/**
 * _putchar - state the character c to stdout
 * @c: The char to write
 *
 * Return: alway 1. (when validated)
 * else, -1 is returned, (error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
