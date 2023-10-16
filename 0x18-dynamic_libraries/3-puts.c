#include "main.h"

/**
 * _puts - display a str to stdout
 * @str: pointer to the str to be displayed
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
