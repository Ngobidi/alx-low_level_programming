#include "main.h"
#include <unistd.h>
/**
 * _putchar - print the char c to stdout
 * @c: The char to write
 *
 * Return: return 1.(if loically correct)
 * On error, -1 is printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
