#include "main.h"

/**
 * puts_half - write a program that print half of a string
 * next by a new line
 * @str: string
 */
void puts_half(char *str)
{
	int len, n, z;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (z = len / 2; str[z] != '\0'; z++)
		{
			_putchar(str[z]);
		}
	} else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
