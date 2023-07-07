#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int z;

	for (z = 0; str[z] != '\0'; z++)
	{
		_putchar(str[z]);
	}
	_putchar('\n');
}
