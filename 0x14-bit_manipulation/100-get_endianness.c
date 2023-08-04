#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * main - check the code
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{

	unsigned int y = 1;

	if (*(char *)&y == 1)
		return (1);
	else
		return (0);
}
