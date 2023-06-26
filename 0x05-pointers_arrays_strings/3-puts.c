#include "main.h"

/**
 * _puts - write a string to stdout
 * @str: pointer to the string to write
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
