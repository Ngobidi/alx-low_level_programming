#include "main.h"

/**
 * print_numbers - write the numbers, from 0 to 9,
 * next by a new line
 */

void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
