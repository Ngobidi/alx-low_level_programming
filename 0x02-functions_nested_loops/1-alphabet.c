#include "main.h"

/**
 * print_alphabet - alphabet in lower case
 * Return: 0 (when check is over)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
