#include "main.h"
#include <unistd.h>
/**
 * _putchar - state the char c to stdout
 * @c: The char to be stated
 *
 * Return: On always 1. (when validated)
 * else, -1 is returned. (error occured)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
