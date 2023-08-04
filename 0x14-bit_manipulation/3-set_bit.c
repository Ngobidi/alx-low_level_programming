#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * main - check the code
 *
 * Return: 1 if sucessful, or -1 if error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int X_x;

	if (index > 64)
		return (-1);

	for (X_x = 1; index > 0; index--, X_x *= 2)
		;
	*n += X_x;

	return (1);
}
