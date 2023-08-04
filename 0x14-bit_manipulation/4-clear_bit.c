#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * main - check the code
 *
 * Return: 1 if successful, or -1 if error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
