#include "main.h"

/**
 * _puts_recursion - write a string, next by a new line
 * @s: string to write
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
